#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14843;
long long int var_1 = -1204266869504485588LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6923097235030766220LL;
int var_4 = 232673183;
_Bool var_5 = (_Bool)0;
unsigned int var_13 = 2595221682U;
unsigned short var_14 = (unsigned short)23550;
int zero = 0;
int var_18 = 1083754549;
unsigned short var_19 = (unsigned short)56504;
unsigned int var_20 = 4266439929U;
signed char var_21 = (signed char)32;
int var_22 = -625547470;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
