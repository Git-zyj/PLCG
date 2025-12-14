#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58589;
long long int var_2 = 1337357285452930722LL;
int var_3 = 1239445027;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 3735570705U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29617;
int zero = 0;
signed char var_16 = (signed char)-31;
unsigned short var_17 = (unsigned short)20666;
int var_18 = -641097533;
void init() {
}

void checksum() {
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
