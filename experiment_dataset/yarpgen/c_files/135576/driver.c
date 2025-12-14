#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4159;
int var_8 = -566947811;
long long int var_10 = 125121751060366323LL;
int zero = 0;
unsigned long long int var_19 = 2807086227862061781ULL;
short var_20 = (short)6000;
unsigned int var_21 = 2246472620U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
