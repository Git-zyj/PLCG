#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3113440907501563464ULL;
long long int var_7 = 3275825813259502324LL;
_Bool var_10 = (_Bool)0;
long long int var_12 = -8363329709267262693LL;
_Bool var_13 = (_Bool)1;
int var_14 = -1445737939;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 4216120372155083658LL;
unsigned long long int var_18 = 18013206709121475256ULL;
signed char var_19 = (signed char)6;
void init() {
}

void checksum() {
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
