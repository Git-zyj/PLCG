#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2265950105U;
unsigned long long int var_5 = 7532523362333713956ULL;
signed char var_9 = (signed char)95;
unsigned short var_12 = (unsigned short)11947;
long long int var_17 = -5750446416576969809LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -2004419820;
int var_20 = -1921059133;
unsigned int var_21 = 848159977U;
unsigned char var_22 = (unsigned char)158;
signed char var_23 = (signed char)11;
unsigned short var_24 = (unsigned short)12984;
short var_25 = (short)12838;
unsigned char var_26 = (unsigned char)8;
short var_27 = (short)7292;
unsigned long long int var_28 = 16904887200027141219ULL;
unsigned char var_29 = (unsigned char)1;
signed char var_30 = (signed char)-19;
unsigned int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
int arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
signed char arr_4 [11] [11] ;
signed char arr_6 [11] ;
long long int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1545847589U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 8771064188121773581ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1407580296;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)57 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8992040338489657807LL : 7913191710249521123LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
