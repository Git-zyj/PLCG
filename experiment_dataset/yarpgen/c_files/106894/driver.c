#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5640528088736197499LL;
short var_7 = (short)14813;
unsigned long long int var_8 = 3670687051797066364ULL;
long long int var_11 = -732424761839151193LL;
int var_13 = 1732438563;
unsigned short var_17 = (unsigned short)63927;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-110;
int var_21 = 408111612;
long long int var_22 = -2086334534553010654LL;
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
