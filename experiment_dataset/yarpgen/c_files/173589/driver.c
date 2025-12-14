#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12698;
signed char var_4 = (signed char)-3;
unsigned short var_5 = (unsigned short)49931;
unsigned short var_8 = (unsigned short)2875;
signed char var_9 = (signed char)43;
int zero = 0;
unsigned int var_11 = 1964478608U;
int var_12 = -743565427;
int var_13 = -124477425;
signed char var_14 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
