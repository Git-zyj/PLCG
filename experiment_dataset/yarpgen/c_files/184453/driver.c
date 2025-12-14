#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1759189110;
unsigned char var_9 = (unsigned char)40;
unsigned int var_11 = 1329593192U;
unsigned char var_14 = (unsigned char)92;
unsigned char var_16 = (unsigned char)9;
int zero = 0;
int var_18 = -1662098968;
short var_19 = (short)2061;
int var_20 = 1825765662;
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
