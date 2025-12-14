#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1064443199U;
unsigned long long int var_3 = 13600360816067510088ULL;
long long int var_4 = 1090790448058760080LL;
unsigned char var_6 = (unsigned char)181;
unsigned char var_7 = (unsigned char)98;
signed char var_9 = (signed char)107;
unsigned char var_12 = (unsigned char)47;
signed char var_13 = (signed char)-120;
unsigned short var_14 = (unsigned short)15072;
int zero = 0;
signed char var_17 = (signed char)36;
int var_18 = 13182894;
signed char var_19 = (signed char)-127;
long long int var_20 = 471237437692097175LL;
long long int var_21 = 2010304778371411813LL;
signed char var_22 = (signed char)-9;
long long int arr_1 [14] [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned int arr_5 [14] ;
_Bool arr_6 [14] ;
_Bool arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -7027038728029810262LL : -7076637113508873877LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3725558929U : 2189942174U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1767607895U : 280800864U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
