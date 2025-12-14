#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-74;
signed char var_2 = (signed char)-1;
short var_4 = (short)-23462;
unsigned int var_5 = 1221753766U;
short var_6 = (short)-19722;
short var_7 = (short)30068;
short var_10 = (short)-27734;
short var_11 = (short)-32608;
int zero = 0;
unsigned long long int var_12 = 16112553877172919998ULL;
signed char var_13 = (signed char)-47;
unsigned char var_14 = (unsigned char)1;
unsigned char var_15 = (unsigned char)20;
unsigned char var_16 = (unsigned char)114;
unsigned long long int var_17 = 14738076474579261926ULL;
signed char var_18 = (signed char)75;
unsigned int var_19 = 673492971U;
unsigned char var_20 = (unsigned char)96;
unsigned int var_21 = 295941832U;
unsigned char var_22 = (unsigned char)206;
short var_23 = (short)-8066;
short var_24 = (short)21032;
signed char var_25 = (signed char)-99;
unsigned long long int arr_1 [13] [13] ;
short arr_2 [13] [13] ;
short arr_7 [13] [13] [13] ;
unsigned int arr_15 [10] [10] ;
unsigned int arr_20 [22] ;
short arr_22 [22] ;
short arr_24 [22] ;
unsigned int arr_4 [13] [13] [13] ;
signed char arr_5 [13] [13] ;
unsigned long long int arr_9 [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] ;
unsigned char arr_11 [13] [13] [13] ;
unsigned long long int arr_12 [13] ;
unsigned char arr_13 [13] ;
short arr_17 [10] ;
unsigned long long int arr_18 [10] ;
unsigned char arr_19 [10] [10] ;
short arr_23 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 9514229950709579490ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18018;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-25239;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = 838747148U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 991250694U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (short)9275;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (short)3788;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3250643533U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1968184221509321601ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6573546039501472763ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 18249411647091221452ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (short)15390;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 3997258915770220235ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (short)10027;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
