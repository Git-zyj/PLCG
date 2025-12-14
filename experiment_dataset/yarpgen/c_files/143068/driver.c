#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)58;
signed char var_11 = (signed char)70;
unsigned char var_13 = (unsigned char)0;
unsigned short var_15 = (unsigned short)22454;
unsigned long long int var_17 = 9061474571574637504ULL;
short var_19 = (short)-30187;
int zero = 0;
short var_20 = (short)6017;
unsigned int var_21 = 1203337285U;
unsigned char var_22 = (unsigned char)62;
unsigned int var_23 = 2332914019U;
unsigned char var_24 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
