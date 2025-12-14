#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
int var_2 = -418329959;
unsigned long long int var_3 = 11989299432895992732ULL;
unsigned char var_5 = (unsigned char)41;
long long int var_8 = -5370819710166395931LL;
unsigned int var_9 = 4248057393U;
unsigned int var_10 = 621689128U;
short var_12 = (short)-4845;
unsigned long long int var_15 = 14325942061839305774ULL;
signed char var_16 = (signed char)107;
signed char var_17 = (signed char)-49;
int zero = 0;
short var_18 = (short)-27512;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4271477106U;
unsigned long long int var_21 = 4198708934909807462ULL;
signed char var_22 = (signed char)72;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)78;
unsigned int var_25 = 4216655248U;
unsigned char var_26 = (unsigned char)240;
unsigned int arr_1 [18] ;
short arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
short arr_4 [18] [18] ;
long long int arr_8 [21] [21] ;
unsigned short arr_5 [18] [18] ;
unsigned int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 563214632U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)28147;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 3114476567U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-32545;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -1440698806588699284LL : -5661540272429039521LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)1250;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1905770830U : 1379059207U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
