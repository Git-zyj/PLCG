#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = 7253206902328258873LL;
short var_7 = (short)-7372;
short var_9 = (short)22170;
int zero = 0;
unsigned long long int var_10 = 14719545253422946488ULL;
unsigned long long int var_11 = 8832437351851505845ULL;
signed char var_12 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
