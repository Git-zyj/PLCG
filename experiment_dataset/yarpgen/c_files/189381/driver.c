#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
short var_2 = (short)-10970;
short var_3 = (short)29;
unsigned short var_6 = (unsigned short)7760;
unsigned long long int var_8 = 3653710155363037776ULL;
int zero = 0;
short var_14 = (short)-20184;
unsigned char var_15 = (unsigned char)174;
unsigned int var_16 = 213161232U;
int var_17 = 1865877666;
unsigned char var_18 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
