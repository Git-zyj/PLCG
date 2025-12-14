#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10861520472289356106ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)7979;
unsigned int var_6 = 2567898677U;
unsigned int var_7 = 1224828466U;
unsigned int var_9 = 2316698042U;
unsigned char var_10 = (unsigned char)239;
long long int var_11 = 8986585210070911894LL;
unsigned char var_12 = (unsigned char)192;
long long int var_13 = -6872717217983548095LL;
signed char var_14 = (signed char)93;
unsigned int var_17 = 2700450467U;
int zero = 0;
unsigned long long int var_20 = 10185815316266251447ULL;
unsigned int var_21 = 2767081388U;
signed char var_22 = (signed char)-66;
unsigned int var_23 = 3042860832U;
unsigned int var_24 = 3910498331U;
unsigned short var_25 = (unsigned short)51535;
unsigned short var_26 = (unsigned short)52775;
unsigned long long int var_27 = 11719750026353927911ULL;
unsigned short var_28 = (unsigned short)23830;
unsigned char var_29 = (unsigned char)154;
signed char var_30 = (signed char)-90;
unsigned int var_31 = 1252147041U;
signed char var_32 = (signed char)42;
unsigned int arr_1 [11] [11] ;
unsigned char arr_3 [11] ;
long long int arr_4 [11] [11] [11] ;
unsigned char arr_5 [11] [11] ;
signed char arr_6 [11] [11] [11] ;
unsigned int arr_8 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] ;
unsigned short arr_11 [11] ;
signed char arr_13 [11] [11] [11] ;
unsigned long long int arr_18 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 533565160U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2200963609323794806LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 160996857U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 5849880407231498760ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned short)61513;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 7231754176785799015ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
