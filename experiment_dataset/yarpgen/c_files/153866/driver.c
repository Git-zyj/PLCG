#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3440471751U;
long long int var_3 = 668667322648207550LL;
long long int var_7 = -6026825537189546167LL;
signed char var_10 = (signed char)-18;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 847110291U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
