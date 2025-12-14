#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9224474669600901572ULL;
short var_3 = (short)29169;
long long int var_4 = -1047732786901513314LL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2027693330U;
int var_10 = -1746849926;
unsigned long long int var_11 = 17153072224870875225ULL;
int zero = 0;
unsigned long long int var_14 = 12541636665139223612ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1524119584U;
long long int var_17 = -4560508139751235360LL;
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
