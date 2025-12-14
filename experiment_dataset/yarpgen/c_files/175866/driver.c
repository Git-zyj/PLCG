#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3255210359U;
unsigned int var_5 = 1700647588U;
_Bool var_9 = (_Bool)0;
long long int var_11 = -3677712426751227179LL;
int var_16 = -912994723;
unsigned long long int var_18 = 12774377921237609677ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7564337786822434139LL;
void init() {
}

void checksum() {
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
