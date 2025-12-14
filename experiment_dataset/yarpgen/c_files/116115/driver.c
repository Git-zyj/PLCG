#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 375738950U;
unsigned long long int var_1 = 1177462282540964320ULL;
short var_2 = (short)-22560;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-119;
unsigned int var_5 = 3648883914U;
short var_6 = (short)-16001;
long long int var_8 = -2987431872122438949LL;
long long int var_11 = 2852256466034422382LL;
long long int var_12 = -3313609848478245910LL;
signed char var_13 = (signed char)12;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)18;
long long int var_16 = -7287803087473427071LL;
unsigned short var_18 = (unsigned short)14650;
int zero = 0;
unsigned int var_19 = 1065399270U;
long long int var_20 = 7276693259636123570LL;
short var_21 = (short)-994;
signed char var_22 = (signed char)41;
signed char var_23 = (signed char)-44;
unsigned int var_24 = 3616789474U;
signed char var_25 = (signed char)-9;
short var_26 = (short)22463;
signed char var_27 = (signed char)-59;
long long int var_28 = -5071995347709409304LL;
int var_29 = 410537295;
unsigned long long int var_30 = 15147479116552631603ULL;
unsigned int var_31 = 4073281338U;
signed char var_32 = (signed char)-29;
signed char var_33 = (signed char)5;
int var_34 = -49642533;
short var_35 = (short)19487;
unsigned int var_36 = 1094604600U;
short var_37 = (short)-6470;
unsigned long long int arr_5 [22] [22] ;
short arr_8 [22] [22] ;
unsigned long long int arr_29 [22] [22] [22] ;
unsigned char arr_34 [22] [22] [22] ;
signed char arr_41 [22] ;
_Bool arr_44 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 11219750714059660830ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (short)11850;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 392677605389670734ULL : 1191485098060241277ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)53 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_44 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
