#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-62;
int var_2 = 298804607;
long long int var_3 = 8254387503854003790LL;
long long int var_4 = -3678604517488016656LL;
unsigned int var_6 = 274665071U;
unsigned char var_8 = (unsigned char)128;
long long int var_9 = -5855578652611371480LL;
int var_10 = -2025951472;
int zero = 0;
short var_13 = (short)12774;
int var_14 = 1315608887;
void init() {
}

void checksum() {
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
