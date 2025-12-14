#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 275140403;
unsigned char var_3 = (unsigned char)23;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)34147;
unsigned short var_7 = (unsigned short)21233;
unsigned char var_8 = (unsigned char)20;
_Bool var_12 = (_Bool)0;
int var_13 = -851897231;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3555432456U;
int var_16 = 754588900;
unsigned long long int var_18 = 12346482389176138066ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)3024;
unsigned int var_21 = 4123940766U;
int var_22 = -69227781;
int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -232669509 : -799338866;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
