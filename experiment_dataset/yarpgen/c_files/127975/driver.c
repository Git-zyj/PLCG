#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned char var_4 = (unsigned char)138;
unsigned short var_6 = (unsigned short)22647;
short var_8 = (short)-22370;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = 1209238236;
int var_13 = -41624802;
int var_14 = 368714718;
short var_15 = (short)-8099;
int var_16 = -2083456420;
unsigned short var_17 = (unsigned short)42760;
int var_18 = -985915041;
short var_19 = (short)-18152;
unsigned int var_20 = 3178872076U;
unsigned char arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
long long int arr_6 [11] [11] [11] ;
int arr_8 [11] [11] [11] ;
unsigned char arr_11 [11] [11] [11] [11] ;
signed char arr_13 [10] ;
unsigned long long int arr_19 [10] [10] ;
long long int arr_20 [10] ;
unsigned char arr_21 [10] [10] [10] [10] ;
short arr_30 [10] [10] [10] [10] ;
int arr_3 [11] ;
int arr_22 [10] [10] [10] ;
short arr_31 [10] [10] [10] [10] [10] ;
int arr_32 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)107 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 5829454564210660136LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1719068394;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)221 : (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)14 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 10982107546227122522ULL : 8758358560508487730ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 2520057546355067126LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (short)20441;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1461677086 : 862470785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 227461315 : 1506809225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)7094 : (short)16124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1466166008 : 347442620;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
