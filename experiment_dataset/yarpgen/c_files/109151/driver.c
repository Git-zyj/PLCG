#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
long long int var_14 = -37913963764901878LL;
int zero = 0;
unsigned short var_19 = (unsigned short)33586;
unsigned long long int var_20 = 4938209990216424929ULL;
long long int var_21 = -2721981740359623731LL;
unsigned int var_22 = 2652152180U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
