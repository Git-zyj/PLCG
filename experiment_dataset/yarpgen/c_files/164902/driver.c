#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
signed char var_1 = (signed char)-4;
int var_2 = 657352264;
unsigned char var_3 = (unsigned char)237;
short var_6 = (short)17232;
short var_7 = (short)13228;
unsigned char var_8 = (unsigned char)209;
unsigned char var_9 = (unsigned char)250;
signed char var_11 = (signed char)-18;
signed char var_12 = (signed char)13;
int zero = 0;
unsigned char var_13 = (unsigned char)6;
short var_14 = (short)-7095;
unsigned char var_15 = (unsigned char)11;
unsigned char var_16 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
