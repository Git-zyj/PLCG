#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16548;
unsigned short var_4 = (unsigned short)7858;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 557682547U;
unsigned int var_11 = 3037339803U;
int zero = 0;
unsigned int var_12 = 786045542U;
short var_13 = (short)4254;
unsigned long long int var_14 = 10914900356531486091ULL;
void init() {
}

void checksum() {
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
