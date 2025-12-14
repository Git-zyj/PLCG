#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 3713677225U;
unsigned short var_4 = (unsigned short)54014;
unsigned long long int var_6 = 15770205052753167601ULL;
signed char var_10 = (signed char)-41;
unsigned long long int var_12 = 4569734017495350888ULL;
int zero = 0;
signed char var_13 = (signed char)55;
unsigned long long int var_14 = 13593949348780893943ULL;
void init() {
}

void checksum() {
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
