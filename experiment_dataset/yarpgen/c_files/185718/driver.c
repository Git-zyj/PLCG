#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
short var_1 = (short)-2109;
long long int var_2 = 5882594195283316306LL;
signed char var_3 = (signed char)-67;
long long int var_4 = 1958932660233062190LL;
signed char var_6 = (signed char)123;
short var_7 = (short)7282;
int var_8 = -266671162;
unsigned int var_11 = 4033125881U;
short var_12 = (short)-14382;
int zero = 0;
long long int var_13 = -8783386069252078143LL;
unsigned short var_14 = (unsigned short)16586;
unsigned int var_15 = 1267613177U;
long long int var_16 = 2716997296904076098LL;
unsigned short var_17 = (unsigned short)42179;
unsigned int var_18 = 2692269823U;
short var_19 = (short)20843;
unsigned int var_20 = 1700805705U;
signed char var_21 = (signed char)-32;
unsigned short var_22 = (unsigned short)10055;
unsigned long long int var_23 = 16150235814686710520ULL;
unsigned char var_24 = (unsigned char)22;
unsigned char arr_1 [14] [14] ;
unsigned short arr_3 [14] [14] [14] ;
long long int arr_4 [14] [14] [14] ;
unsigned int arr_6 [14] [14] ;
long long int arr_8 [14] [14] [14] [14] ;
long long int arr_9 [14] ;
unsigned short arr_10 [14] ;
signed char arr_13 [14] [14] [14] ;
int arr_22 [14] [14] [14] [14] [14] ;
unsigned long long int arr_24 [14] [14] [14] [14] [14] ;
unsigned char arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)15643;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -79023538404163357LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 248944957U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -5766947128440489966LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 7947032974173053766LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned short)36661;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = -311860379;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 8813079164356293649ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (unsigned char)5;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
