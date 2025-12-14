#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1228863629;
_Bool var_3 = (_Bool)0;
int var_4 = 1468234973;
short var_5 = (short)-17700;
unsigned long long int var_8 = 868349673455596798ULL;
unsigned int var_9 = 3001652793U;
unsigned int var_10 = 496987277U;
long long int var_13 = 1739786574343387695LL;
int zero = 0;
int var_14 = -2091316658;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
