#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned char var_1 = (unsigned char)206;
unsigned long long int var_5 = 14776826802074441897ULL;
unsigned long long int var_6 = 5346431223500945563ULL;
unsigned char var_8 = (unsigned char)168;
unsigned short var_16 = (unsigned short)44410;
int zero = 0;
int var_18 = -1221160329;
short var_19 = (short)-11992;
int var_20 = 342055875;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
