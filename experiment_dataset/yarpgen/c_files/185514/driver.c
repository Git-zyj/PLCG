#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)129;
unsigned int var_6 = 1050291018U;
unsigned char var_7 = (unsigned char)37;
unsigned char var_8 = (unsigned char)66;
unsigned long long int var_13 = 14800434814535381637ULL;
unsigned int var_14 = 1337904218U;
int zero = 0;
short var_19 = (short)-14278;
signed char var_20 = (signed char)119;
unsigned long long int var_21 = 15000623490183646600ULL;
void init() {
}

void checksum() {
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
