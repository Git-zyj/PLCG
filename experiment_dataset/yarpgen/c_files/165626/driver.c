#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1849832913;
unsigned long long int var_4 = 14289597830821686435ULL;
long long int var_5 = -7835800692509840035LL;
signed char var_16 = (signed char)-62;
signed char var_17 = (signed char)-125;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1395763917U;
void init() {
}

void checksum() {
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
