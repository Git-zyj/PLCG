#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6685793224804232516LL;
unsigned char var_1 = (unsigned char)174;
long long int var_2 = 3334178753006001195LL;
unsigned char var_3 = (unsigned char)231;
unsigned short var_4 = (unsigned short)32805;
int var_6 = -2036380807;
long long int var_7 = 6092720829625229131LL;
unsigned char var_9 = (unsigned char)39;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4744812726996821931LL;
int zero = 0;
int var_13 = 987171579;
unsigned long long int var_14 = 17192181197974072783ULL;
unsigned long long int var_15 = 12486204413437751415ULL;
long long int var_16 = -2851474677360615811LL;
unsigned char var_17 = (unsigned char)30;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)29;
unsigned long long int var_20 = 9113753396159340790ULL;
short var_21 = (short)-24788;
_Bool var_22 = (_Bool)0;
int var_23 = -1477104402;
short var_24 = (short)-31353;
int var_25 = 960944933;
long long int var_26 = -5070061747516852260LL;
unsigned char var_27 = (unsigned char)193;
unsigned short var_28 = (unsigned short)40697;
int var_29 = 614367836;
unsigned char var_30 = (unsigned char)230;
long long int var_31 = 8405863700335164131LL;
_Bool var_32 = (_Bool)1;
int var_33 = -2067421888;
_Bool var_34 = (_Bool)0;
long long int arr_0 [18] [18] ;
long long int arr_1 [18] [18] ;
_Bool arr_6 [11] [11] ;
long long int arr_7 [11] ;
unsigned long long int arr_9 [11] ;
unsigned long long int arr_12 [11] [11] ;
signed char arr_23 [13] [13] [13] ;
unsigned int arr_24 [13] [13] [13] ;
signed char arr_26 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_3 [18] ;
long long int arr_4 [18] ;
_Bool arr_13 [11] [11] [11] ;
unsigned short arr_14 [11] [11] [11] [11] ;
short arr_38 [13] ;
unsigned long long int arr_42 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -5524295499405479333LL : -149834737026478872LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -2949510380058409105LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 3937978229181178105LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 3806708573302836563ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 8184499479787244883ULL : 13291705678307268580ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3368396939U : 576560077U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (signed char)-52 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 11568014323793921064ULL : 3204815206914887688ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -9028385479440079485LL : -2710215419053871450LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)27763 : (unsigned short)34297;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = (short)-21369;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_42 [i_0] = 16036765356252164654ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
