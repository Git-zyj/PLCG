#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2110336953U;
unsigned int var_6 = 476525906U;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-3;
int zero = 0;
long long int var_14 = 871565651540957533LL;
int var_15 = 676481843;
unsigned short var_16 = (unsigned short)32012;
long long int var_17 = -3645349371717631175LL;
int var_18 = -364714804;
unsigned int var_19 = 3794013061U;
unsigned short var_20 = (unsigned short)1807;
unsigned int var_21 = 960832169U;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
