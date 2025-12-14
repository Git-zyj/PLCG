#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 141355494;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1135561404U;
unsigned short var_11 = (unsigned short)45390;
signed char var_12 = (signed char)-126;
int zero = 0;
int var_13 = 1556027803;
unsigned char var_14 = (unsigned char)95;
short var_15 = (short)28008;
void init() {
}

void checksum() {
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
