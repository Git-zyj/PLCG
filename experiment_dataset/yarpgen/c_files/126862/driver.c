#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 708759715U;
short var_4 = (short)6145;
signed char var_5 = (signed char)-99;
unsigned int var_7 = 522893749U;
unsigned int var_8 = 811315783U;
unsigned int var_9 = 586738271U;
unsigned int var_10 = 3006443007U;
unsigned int var_15 = 1025491308U;
int zero = 0;
signed char var_17 = (signed char)-79;
short var_18 = (short)-3492;
void init() {
}

void checksum() {
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
