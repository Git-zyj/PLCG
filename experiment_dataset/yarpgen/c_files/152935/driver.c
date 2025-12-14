#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)123;
short var_5 = (short)-2704;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)74;
unsigned long long int var_9 = 10021093060392831619ULL;
signed char var_13 = (signed char)45;
int var_17 = -1286969331;
int zero = 0;
signed char var_18 = (signed char)-89;
unsigned long long int var_19 = 13853152782757538651ULL;
short var_20 = (short)-30458;
unsigned long long int var_21 = 12384920521565026896ULL;
unsigned short var_22 = (unsigned short)3537;
long long int var_23 = -1196314141408314151LL;
unsigned int var_24 = 617537255U;
signed char var_25 = (signed char)29;
unsigned char var_26 = (unsigned char)146;
long long int var_27 = 6597900409331696483LL;
unsigned int var_28 = 260981304U;
unsigned int var_29 = 3718236976U;
unsigned char var_30 = (unsigned char)55;
unsigned long long int var_31 = 18276333566010605935ULL;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 8515369893201612874ULL;
int var_34 = 1712305180;
unsigned short arr_0 [16] [16] ;
short arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] ;
signed char arr_4 [16] ;
unsigned long long int arr_5 [16] [16] ;
_Bool arr_7 [15] ;
unsigned char arr_23 [13] [13] [13] [13] ;
signed char arr_10 [15] ;
long long int arr_13 [13] ;
int arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)50268;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-18461;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 3073115235U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 9922630885351982990ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)-25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = -6844819664041605467LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 293673926;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
