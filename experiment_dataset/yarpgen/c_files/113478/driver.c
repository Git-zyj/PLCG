#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12430188978159820384ULL;
long long int var_7 = 5285882083227043834LL;
short var_12 = (short)31338;
int zero = 0;
short var_14 = (short)-7776;
int var_15 = 1053144875;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
