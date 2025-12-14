#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1163980239;
unsigned char var_1 = (unsigned char)98;
long long int var_2 = -4807025275560137309LL;
unsigned char var_3 = (unsigned char)141;
signed char var_5 = (signed char)-21;
unsigned short var_6 = (unsigned short)11972;
int var_7 = -485576499;
short var_11 = (short)-6083;
int zero = 0;
short var_12 = (short)-15899;
short var_13 = (short)-27665;
unsigned int var_14 = 3693310657U;
signed char var_15 = (signed char)-20;
void init() {
}

void checksum() {
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
