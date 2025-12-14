#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2299759834634730354LL;
long long int var_4 = 8475288250315419634LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 16416461049693732864ULL;
long long int var_16 = -2563957650369248430LL;
long long int var_17 = 2692214916193642663LL;
unsigned long long int var_18 = 13531780295101850215ULL;
signed char var_19 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
