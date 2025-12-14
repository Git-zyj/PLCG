#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18169;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-120;
unsigned long long int var_5 = 16104836423323706296ULL;
long long int var_6 = -9170141452838387426LL;
unsigned int var_7 = 1756712243U;
short var_10 = (short)-32295;
long long int var_11 = -4621934082147592658LL;
int zero = 0;
short var_13 = (short)-27818;
unsigned short var_14 = (unsigned short)21414;
unsigned int var_15 = 1347489544U;
short var_16 = (short)-24923;
signed char var_17 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
