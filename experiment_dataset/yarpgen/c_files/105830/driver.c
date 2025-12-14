#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1662981769U;
unsigned int var_3 = 3025724283U;
signed char var_4 = (signed char)-121;
signed char var_10 = (signed char)0;
_Bool var_11 = (_Bool)1;
int var_12 = -766650427;
unsigned short var_13 = (unsigned short)15058;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2814872334U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
short var_23 = (short)15156;
unsigned int var_24 = 1434983298U;
signed char var_25 = (signed char)-91;
_Bool var_26 = (_Bool)1;
short var_27 = (short)15115;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1461582832 : -361034118;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
