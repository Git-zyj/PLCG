#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1788485105U;
unsigned int var_13 = 72605050U;
signed char var_14 = (signed char)-60;
int zero = 0;
unsigned char var_15 = (unsigned char)244;
signed char var_16 = (signed char)-9;
int var_17 = -300350253;
int var_18 = 1525950580;
void init() {
}

void checksum() {
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
