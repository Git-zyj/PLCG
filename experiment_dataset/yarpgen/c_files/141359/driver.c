#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48435;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_11 = (signed char)-51;
unsigned short var_12 = (unsigned short)26795;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)49177;
int zero = 0;
unsigned short var_18 = (unsigned short)21097;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)51816;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
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
