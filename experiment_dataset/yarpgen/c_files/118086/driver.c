#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21198;
unsigned long long int var_7 = 12792707789930558774ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 12704732110722732989ULL;
int zero = 0;
int var_14 = -1438479747;
long long int var_15 = 2157525090189680388LL;
signed char var_16 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
