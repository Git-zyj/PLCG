#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2010576703;
unsigned long long int var_4 = 7405107282910107640ULL;
unsigned int var_5 = 1272636550U;
unsigned long long int var_8 = 16387899745529189441ULL;
int var_10 = 1416055270;
unsigned long long int var_11 = 16690078773285801560ULL;
unsigned int var_13 = 1446128501U;
int zero = 0;
unsigned long long int var_16 = 13173746419404038738ULL;
signed char var_17 = (signed char)-25;
signed char var_18 = (signed char)-77;
unsigned long long int var_19 = 5404849513318756477ULL;
unsigned int var_20 = 2722975219U;
unsigned long long int var_21 = 12816924554788578191ULL;
unsigned int var_22 = 2047744830U;
unsigned int var_23 = 3219002930U;
unsigned int arr_6 [18] [18] ;
unsigned long long int arr_7 [18] ;
int arr_17 [10] [10] [10] [10] ;
unsigned char arr_4 [16] ;
_Bool arr_8 [18] ;
unsigned int arr_13 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 1374032181U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 9463329824943857667ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 110529493;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 176544373U : 1982247070U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
