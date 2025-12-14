#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3275072772199734456ULL;
signed char var_3 = (signed char)85;
unsigned short var_11 = (unsigned short)21276;
unsigned short var_12 = (unsigned short)59512;
unsigned short var_13 = (unsigned short)18082;
unsigned char var_14 = (unsigned char)59;
int zero = 0;
unsigned short var_15 = (unsigned short)3329;
unsigned long long int var_16 = 12368096373010795879ULL;
int var_17 = 828250892;
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
