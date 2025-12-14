#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13698421758159319800ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -545555687;
int var_10 = -674337284;
short var_12 = (short)9471;
unsigned int var_13 = 218774852U;
unsigned char var_14 = (unsigned char)80;
unsigned int var_15 = 2865318716U;
unsigned long long int var_17 = 13834885066939646073ULL;
int zero = 0;
long long int var_20 = 789684435363409592LL;
long long int var_21 = 5741611016025747415LL;
signed char var_22 = (signed char)24;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
