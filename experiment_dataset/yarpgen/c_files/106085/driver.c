#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
unsigned short var_6 = (unsigned short)12333;
unsigned int var_8 = 1812691554U;
signed char var_13 = (signed char)-77;
int zero = 0;
unsigned int var_18 = 3564129800U;
signed char var_19 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
