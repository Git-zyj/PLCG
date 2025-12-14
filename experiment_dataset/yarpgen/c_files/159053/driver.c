#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2140643279U;
_Bool var_3 = (_Bool)0;
int var_4 = -1247658989;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)190;
long long int var_8 = 2998113277838978766LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)62;
unsigned int var_12 = 3938641807U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)31990;
int var_15 = -67812509;
long long int var_16 = 3903965368160135764LL;
signed char var_17 = (signed char)-86;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 13211573648042291154ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)198;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)39;
long long int var_25 = 3665761600695952345LL;
unsigned short var_26 = (unsigned short)56210;
signed char var_27 = (signed char)31;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)138;
unsigned char var_30 = (unsigned char)129;
long long int var_31 = -8823369133939422262LL;
unsigned char var_32 = (unsigned char)37;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)1;
int arr_0 [22] ;
unsigned char arr_1 [22] ;
_Bool arr_2 [22] ;
unsigned char arr_4 [22] [22] [22] ;
_Bool arr_5 [22] [22] ;
unsigned char arr_8 [22] [22] [22] [22] ;
unsigned char arr_10 [22] [22] [22] ;
int arr_12 [22] [22] [22] ;
unsigned char arr_15 [22] [22] [22] ;
signed char arr_17 [22] ;
_Bool arr_19 [22] [22] [22] [22] ;
_Bool arr_22 [17] [17] ;
signed char arr_26 [17] ;
_Bool arr_28 [17] [17] ;
unsigned int arr_32 [17] ;
_Bool arr_43 [24] [24] ;
_Bool arr_44 [24] [24] ;
_Bool arr_3 [22] ;
long long int arr_20 [22] [22] ;
unsigned long long int arr_24 [17] [17] ;
unsigned short arr_25 [17] ;
signed char arr_40 [17] [17] ;
int arr_41 [17] ;
unsigned int arr_42 [17] [17] ;
unsigned char arr_45 [24] ;
int arr_46 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -895087054;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2062308848;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = 1073893213U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_44 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = -3969563537470161691LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = 9535215951414429755ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned short)62109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)106 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_41 [i_0] = 716358059;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_42 [i_0] [i_1] = 300265790U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_45 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_46 [i_0] = 894681643;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
