#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21475;
signed char var_2 = (signed char)-58;
unsigned int var_3 = 3846899036U;
long long int var_4 = -8652363712648099702LL;
long long int var_5 = 4370283178472741729LL;
unsigned int var_6 = 3766137832U;
short var_9 = (short)-32487;
unsigned short var_14 = (unsigned short)63073;
short var_15 = (short)-27357;
signed char var_17 = (signed char)-21;
unsigned long long int var_18 = 11847033629511877457ULL;
unsigned long long int var_19 = 9928242993445510137ULL;
int zero = 0;
long long int var_20 = 5542705913714785705LL;
short var_21 = (short)-18319;
unsigned int var_22 = 155119744U;
signed char var_23 = (signed char)-71;
signed char var_24 = (signed char)13;
short var_25 = (short)-21582;
_Bool var_26 = (_Bool)0;
int var_27 = -583048840;
int var_28 = -178098672;
unsigned int var_29 = 3705493737U;
signed char var_30 = (signed char)-107;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)-74;
short arr_2 [11] ;
signed char arr_4 [11] [11] ;
unsigned int arr_8 [11] ;
_Bool arr_9 [11] [11] ;
int arr_19 [12] ;
short arr_20 [12] [12] ;
signed char arr_22 [12] ;
int arr_6 [11] [11] ;
short arr_13 [11] [11] [11] [11] ;
long long int arr_16 [11] ;
unsigned short arr_25 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)32545;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 4275597726U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -2134901314 : -1668439989;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)30579 : (short)-16023;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -589643318;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)20295;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = -2602792443540982872LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37947 : (unsigned short)4010;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
