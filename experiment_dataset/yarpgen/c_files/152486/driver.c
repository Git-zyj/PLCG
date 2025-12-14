#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23678;
unsigned char var_4 = (unsigned char)155;
signed char var_8 = (signed char)76;
unsigned char var_11 = (unsigned char)166;
unsigned char var_12 = (unsigned char)133;
short var_14 = (short)3748;
unsigned char var_15 = (unsigned char)251;
int zero = 0;
unsigned short var_16 = (unsigned short)56393;
int var_17 = -1422221393;
int var_18 = -1767554147;
int var_19 = -1128887300;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
