#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15425;
signed char var_3 = (signed char)-12;
int var_4 = 1798599725;
unsigned short var_5 = (unsigned short)53133;
unsigned short var_6 = (unsigned short)3456;
unsigned int var_8 = 3165914186U;
int zero = 0;
unsigned int var_10 = 622016139U;
signed char var_11 = (signed char)94;
short var_12 = (short)13979;
unsigned int var_13 = 3881833758U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
