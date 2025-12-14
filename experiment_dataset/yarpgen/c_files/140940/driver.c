#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 118794654U;
unsigned long long int var_4 = 7285842242131210184ULL;
int var_6 = 1380486592;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)45;
int var_12 = 975359557;
_Bool var_16 = (_Bool)1;
int var_17 = -1163105195;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -3737103162804152996LL;
int var_20 = -62990935;
long long int var_21 = 1682884798028529437LL;
int var_22 = -1752803595;
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
