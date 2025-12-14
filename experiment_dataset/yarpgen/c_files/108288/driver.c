#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17904342595286053298ULL;
long long int var_3 = -7708211498937527469LL;
long long int var_4 = -6066547960911829397LL;
unsigned char var_6 = (unsigned char)52;
long long int var_7 = -2841515156683905548LL;
unsigned long long int var_8 = 18437966583535632629ULL;
unsigned short var_9 = (unsigned short)15564;
unsigned char var_10 = (unsigned char)220;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
unsigned long long int var_12 = 6713530708782927415ULL;
short var_13 = (short)-3989;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)37;
unsigned char var_16 = (unsigned char)221;
unsigned int var_17 = 762425901U;
unsigned long long int var_18 = 722407234900142759ULL;
unsigned int var_19 = 168113262U;
short var_20 = (short)8443;
_Bool arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_6 [21] ;
unsigned int arr_7 [21] ;
unsigned int arr_8 [21] ;
signed char arr_13 [20] [20] ;
unsigned long long int arr_15 [20] [20] ;
unsigned int arr_17 [20] [20] [20] [20] ;
signed char arr_21 [20] [20] [20] [20] ;
short arr_22 [20] [20] ;
unsigned int arr_25 [20] [20] ;
unsigned long long int arr_27 [20] [20] ;
unsigned int arr_4 [13] ;
unsigned char arr_5 [13] ;
unsigned char arr_9 [21] ;
signed char arr_10 [21] ;
unsigned char arr_11 [21] [21] ;
short arr_32 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 5391291930517158874ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 663578206U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 2747619635U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 13858819238057185320ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 141360152U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (short)24591;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = 327630712U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_27 [i_0] [i_1] = 642083356228995143ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2613858742U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (short)-9060;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
