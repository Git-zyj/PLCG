#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned char var_1 = (unsigned char)40;
signed char var_2 = (signed char)72;
long long int var_3 = -7762284643292965784LL;
unsigned char var_4 = (unsigned char)35;
unsigned short var_5 = (unsigned short)1265;
unsigned char var_6 = (unsigned char)251;
unsigned char var_10 = (unsigned char)213;
short var_11 = (short)31862;
unsigned long long int var_12 = 6684572584896755411ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-25282;
short var_15 = (short)-10017;
unsigned int var_16 = 1169340064U;
unsigned char var_17 = (unsigned char)85;
short var_18 = (short)17775;
int zero = 0;
long long int var_19 = 3898928093694527277LL;
unsigned char var_20 = (unsigned char)118;
short var_21 = (short)22738;
unsigned char var_22 = (unsigned char)140;
signed char var_23 = (signed char)2;
unsigned short var_24 = (unsigned short)45267;
unsigned long long int var_25 = 14863969473429601803ULL;
signed char var_26 = (signed char)24;
unsigned short var_27 = (unsigned short)38112;
signed char var_28 = (signed char)18;
unsigned char var_29 = (unsigned char)211;
unsigned char var_30 = (unsigned char)203;
short var_31 = (short)3754;
_Bool arr_1 [12] ;
unsigned char arr_5 [20] [20] [20] ;
unsigned short arr_6 [20] [20] ;
long long int arr_7 [20] [20] [20] ;
short arr_8 [20] [20] [20] ;
short arr_11 [20] [20] [20] [20] ;
short arr_16 [23] ;
unsigned char arr_17 [23] ;
signed char arr_14 [20] [20] [20] [20] [20] ;
signed char arr_15 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)49002;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5355447775926407810LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-27531;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)8849;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (short)7872;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-29;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
