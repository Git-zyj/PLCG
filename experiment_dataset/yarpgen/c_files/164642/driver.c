#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20277;
unsigned char var_2 = (unsigned char)228;
short var_3 = (short)-7689;
unsigned short var_4 = (unsigned short)50731;
unsigned char var_6 = (unsigned char)232;
short var_10 = (short)-20781;
int zero = 0;
signed char var_11 = (signed char)66;
unsigned short var_12 = (unsigned short)10096;
unsigned char var_13 = (unsigned char)243;
unsigned char var_14 = (unsigned char)32;
signed char var_15 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
