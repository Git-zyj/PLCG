#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
short var_4 = (short)9912;
signed char var_6 = (signed char)-8;
signed char var_9 = (signed char)-75;
unsigned int var_14 = 4050597132U;
int zero = 0;
short var_19 = (short)-23902;
signed char var_20 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
