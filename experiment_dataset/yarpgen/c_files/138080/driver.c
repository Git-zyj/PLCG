#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53510;
unsigned short var_1 = (unsigned short)19203;
int var_3 = 1123179688;
int var_4 = 795751317;
unsigned short var_6 = (unsigned short)23387;
unsigned short var_7 = (unsigned short)16072;
unsigned short var_16 = (unsigned short)33977;
int zero = 0;
int var_18 = 1640045434;
unsigned short var_19 = (unsigned short)32655;
unsigned short var_20 = (unsigned short)31825;
unsigned short var_21 = (unsigned short)50850;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
