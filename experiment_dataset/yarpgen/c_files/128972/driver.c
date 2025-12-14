#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4745;
unsigned char var_1 = (unsigned char)216;
unsigned int var_5 = 1868141068U;
short var_7 = (short)13268;
signed char var_8 = (signed char)37;
int var_9 = -935716744;
unsigned long long int var_10 = 14254561269931748304ULL;
unsigned char var_11 = (unsigned char)159;
unsigned char var_16 = (unsigned char)128;
signed char var_18 = (signed char)100;
int zero = 0;
unsigned short var_19 = (unsigned short)58846;
int var_20 = -1264539063;
short var_21 = (short)-15137;
signed char var_22 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
