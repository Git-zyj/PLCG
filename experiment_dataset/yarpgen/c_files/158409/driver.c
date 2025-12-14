#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7658;
int var_4 = 916955622;
unsigned char var_5 = (unsigned char)94;
unsigned char var_6 = (unsigned char)127;
short var_7 = (short)1775;
short var_12 = (short)31752;
short var_13 = (short)16372;
short var_14 = (short)17028;
int zero = 0;
int var_15 = -1584399716;
int var_16 = 200469810;
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
