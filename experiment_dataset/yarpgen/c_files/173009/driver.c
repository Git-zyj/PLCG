#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4188180565U;
unsigned int var_3 = 2861207654U;
short var_5 = (short)-2642;
long long int var_6 = 1478131333118990320LL;
unsigned int var_7 = 1023893675U;
unsigned int var_8 = 1460443183U;
unsigned int var_9 = 455253304U;
unsigned int var_10 = 1358129957U;
int zero = 0;
long long int var_11 = -8144073281621142306LL;
long long int var_12 = -1518887590134677937LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 702760701U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
