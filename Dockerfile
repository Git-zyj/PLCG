# PLCG reproduction environment (main branch).
#
# The whole toolchain lives in the image: autotools/gmp/mpfr for building the
# PLCG-modified PLuTo (Compilers/pluto) and the Python stack for the corpus
# pipeline. Nothing else needs to be installed on the host besides docker.
#
# Build:  docker build -t plcg .
# Use:    ./scripts/reproduce.sh smoke      (or setup / corpus / shell)
#
FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive \
    LANG=C.UTF-8 \
    LC_ALL=C.UTF-8

# TUNA Ubuntu mirror: archive.ubuntu.com is slow/unstable from mainland China.
# Plain http is used because the base image has no CA certificates yet.
RUN sed -i \
        -e 's|http://archive.ubuntu.com/ubuntu|http://mirrors.tuna.tsinghua.edu.cn/ubuntu|g' \
        -e 's|http://security.ubuntu.com/ubuntu|http://mirrors.tuna.tsinghua.edu.cn/ubuntu|g' \
        /etc/apt/sources.list

# Build tools for pluto (autotools, gmp, mpfr, flex/bison) and the pipeline.
RUN apt-get update && apt-get install -y --no-install-recommends \
        ca-certificates \
        curl \
        git \
        make \
        build-essential \
        autoconf \
        automake \
        libtool \
        pkg-config \
        libgmp-dev \
        libmpfr-dev \
        flex \
        bison \
        texinfo \
        llvm \
        llvm-14-tools \
        llvm-14-dev \
        clang \
        clang-14 \
        libclang-14-dev \
        python3 \
        python3-pip \
        python3-venv \
        python-is-python3 \
    && rm -rf /var/lib/apt/lists/*

COPY requirements.txt /tmp/requirements.txt
# pip index -> TUNA mirror (same wheels as PyPI, faster from China).
RUN python3 -m pip install --no-cache-dir -i https://pypi.tuna.tsinghua.edu.cn/simple --upgrade pip \
    && python3 -m pip install --no-cache-dir -i https://pypi.tuna.tsinghua.edu.cn/simple -r /tmp/requirements.txt \
    && rm /tmp/requirements.txt

WORKDIR /workspace
CMD ["/bin/bash"]
