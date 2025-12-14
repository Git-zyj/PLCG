#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13354320505644897801ULL;
unsigned int var_10 = 502118479U;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
long long int var_15 = 4551859015293852557LL;
long long int var_16 = 7645215303412978859LL;
unsigned int var_17 = 1267518090U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
