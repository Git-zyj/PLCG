#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22080;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)23645;
short var_12 = (short)31562;
unsigned long long int var_13 = 15493845632705818098ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1958228648;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
