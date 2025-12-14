#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2026926582;
unsigned char var_1 = (unsigned char)222;
unsigned short var_14 = (unsigned short)10353;
int zero = 0;
unsigned int var_16 = 3459509807U;
unsigned long long int var_17 = 16139585834206522913ULL;
unsigned long long int var_18 = 17409849982058482116ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
