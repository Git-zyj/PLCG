#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2514699862235164580LL;
unsigned int var_5 = 3369089110U;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)1094;
unsigned long long int var_12 = 16409615979204319124ULL;
short var_14 = (short)-31528;
int zero = 0;
long long int var_17 = -8350082668785611816LL;
_Bool var_18 = (_Bool)0;
int var_19 = 1453222040;
unsigned long long int var_20 = 15395407951925770137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
