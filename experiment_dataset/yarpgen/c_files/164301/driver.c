#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1021923514U;
long long int var_1 = 7145848765714591304LL;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)55;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)40;
int zero = 0;
long long int var_14 = 6312808485206409880LL;
unsigned short var_15 = (unsigned short)37480;
long long int var_16 = -6566231921775569752LL;
_Bool var_17 = (_Bool)1;
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
