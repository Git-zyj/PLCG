#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)6;
short var_2 = (short)19744;
unsigned short var_4 = (unsigned short)44990;
long long int var_7 = -441921458854249350LL;
signed char var_9 = (signed char)-54;
int var_11 = 775799783;
unsigned int var_12 = 1246434101U;
int zero = 0;
unsigned short var_13 = (unsigned short)31032;
long long int var_14 = -373408102444754636LL;
signed char var_15 = (signed char)-44;
unsigned long long int var_16 = 18034933354090958099ULL;
unsigned char var_17 = (unsigned char)222;
unsigned short var_18 = (unsigned short)45721;
unsigned short var_19 = (unsigned short)23673;
unsigned short var_20 = (unsigned short)3693;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-19297;
signed char var_23 = (signed char)113;
unsigned char var_24 = (unsigned char)82;
signed char var_25 = (signed char)-42;
unsigned long long int var_26 = 8439977709010359381ULL;
unsigned short var_27 = (unsigned short)39175;
short var_28 = (short)3742;
unsigned int var_29 = 1151516184U;
signed char var_30 = (signed char)-79;
signed char var_31 = (signed char)50;
short var_32 = (short)-2725;
signed char var_33 = (signed char)-95;
short arr_2 [16] [16] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_5 [16] ;
short arr_13 [16] [16] [16] ;
_Bool arr_16 [16] [16] [16] [16] ;
unsigned short arr_22 [16] [16] [16] [16] ;
long long int arr_30 [22] ;
signed char arr_33 [22] ;
signed char arr_34 [22] [22] [22] ;
signed char arr_35 [22] ;
_Bool arr_4 [16] ;
unsigned char arr_17 [16] ;
unsigned short arr_40 [22] [22] ;
short arr_48 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-23087;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 15658389824010899192ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)8058;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)9160 : (unsigned short)38042;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = -4528299305763851258LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56606 : (unsigned short)56782;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_48 [i_0] [i_1] = (short)-5169;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
