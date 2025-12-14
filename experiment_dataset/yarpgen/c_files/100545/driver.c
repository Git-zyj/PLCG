#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23487;
long long int var_6 = -4558787595885989255LL;
short var_7 = (short)-7687;
unsigned char var_11 = (unsigned char)134;
signed char var_14 = (signed char)64;
signed char var_15 = (signed char)-40;
unsigned long long int var_17 = 10686222826700232392ULL;
int zero = 0;
long long int var_19 = 7484440039109880671LL;
signed char var_20 = (signed char)-14;
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
