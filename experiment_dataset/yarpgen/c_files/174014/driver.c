#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -316372640;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 18122111280170223909ULL;
int zero = 0;
long long int var_10 = 5731799049955224641LL;
unsigned long long int var_11 = 4285420057748486960ULL;
short var_12 = (short)-8726;
unsigned int var_13 = 118902640U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
