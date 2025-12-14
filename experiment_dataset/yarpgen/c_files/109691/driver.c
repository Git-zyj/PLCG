#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56615;
unsigned long long int var_1 = 7734687170754189752ULL;
unsigned short var_2 = (unsigned short)9842;
unsigned int var_4 = 2688793110U;
unsigned short var_12 = (unsigned short)59753;
unsigned short var_13 = (unsigned short)39129;
unsigned short var_14 = (unsigned short)64021;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 6406798200237241156ULL;
short var_20 = (short)23010;
long long int var_21 = 4946674763078016947LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
