#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1002169253U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)184;
unsigned int var_6 = 4092845634U;
int zero = 0;
unsigned char var_10 = (unsigned char)219;
unsigned int var_11 = 654190026U;
int var_12 = 1495702126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
