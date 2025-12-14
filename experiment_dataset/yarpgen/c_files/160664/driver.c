#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2070072261U;
unsigned int var_1 = 330358776U;
unsigned int var_3 = 128478403U;
unsigned long long int var_6 = 4035753463844944746ULL;
unsigned short var_8 = (unsigned short)54648;
unsigned char var_9 = (unsigned char)145;
signed char var_11 = (signed char)-43;
long long int var_16 = 1807372739026158971LL;
int zero = 0;
unsigned long long int var_20 = 5094931875140876394ULL;
signed char var_21 = (signed char)107;
unsigned short var_22 = (unsigned short)57857;
unsigned char var_23 = (unsigned char)52;
unsigned long long int var_24 = 7896558095306119228ULL;
int var_25 = -1836373750;
unsigned char var_26 = (unsigned char)188;
long long int var_27 = -4435440423734663950LL;
unsigned long long int var_28 = 8555706119676599027ULL;
signed char var_29 = (signed char)-54;
unsigned short var_30 = (unsigned short)12440;
long long int var_31 = 7991877465354914836LL;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 519857625854064174ULL;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 1346726448U;
unsigned int var_36 = 547602216U;
unsigned short var_37 = (unsigned short)223;
short var_38 = (short)15068;
signed char var_39 = (signed char)11;
unsigned short var_40 = (unsigned short)33139;
int var_41 = 755495106;
unsigned char var_42 = (unsigned char)50;
unsigned int var_43 = 1882346698U;
unsigned int var_44 = 1664172208U;
int var_45 = 1152588168;
unsigned long long int arr_0 [14] ;
short arr_1 [14] ;
unsigned int arr_4 [14] [14] ;
unsigned long long int arr_7 [16] ;
unsigned int arr_8 [16] [16] ;
unsigned char arr_9 [16] [16] ;
unsigned int arr_10 [16] [16] ;
unsigned short arr_13 [16] [16] ;
unsigned short arr_14 [16] ;
unsigned long long int arr_16 [16] [16] [16] ;
_Bool arr_20 [16] [16] [16] ;
unsigned long long int arr_22 [16] ;
unsigned int arr_26 [16] [16] [16] [16] ;
int arr_33 [16] [16] [16] [16] [16] [16] [16] ;
int arr_34 [16] [16] ;
signed char arr_37 [16] [16] [16] ;
unsigned short arr_11 [16] ;
long long int arr_18 [16] ;
long long int arr_23 [16] ;
unsigned short arr_35 [16] [16] [16] [16] ;
int arr_36 [16] [16] ;
unsigned long long int arr_47 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 13329058795013091095ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)31200;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 3670912925U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 16903657055754650057ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 338699476U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 348453869U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)33970;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned short)11159;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 14507543856867092991ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 8281529206724528666ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 32316445U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1992512072;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = 364184617;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)50636;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -4498278462600098719LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = -8229709503023469348LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3539;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_36 [i_0] [i_1] = 1122640477;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_47 [i_0] = 848255904125286496ULL;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
