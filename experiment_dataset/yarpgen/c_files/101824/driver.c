#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 800902692550968397ULL;
long long int var_2 = 8078832438648279335LL;
int var_3 = 1580266747;
unsigned long long int var_5 = 7499207536628355794ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_14 = -1622976076;
unsigned int var_15 = 3269381833U;
unsigned int var_16 = 3133966923U;
signed char var_17 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
