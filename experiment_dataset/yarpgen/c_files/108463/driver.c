#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1198356410;
unsigned int var_7 = 2563931680U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-22464;
int var_15 = 93269181;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5098457059544621974ULL;
unsigned long long int var_18 = 10202249820548804471ULL;
long long int var_19 = -5861330168257861522LL;
unsigned long long int var_20 = 26076125068497661ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
