#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2205387463U;
unsigned int var_2 = 2486809474U;
unsigned long long int var_3 = 1752266544345882523ULL;
signed char var_5 = (signed char)11;
signed char var_7 = (signed char)65;
unsigned long long int var_9 = 10250660866173458608ULL;
unsigned int var_10 = 2357056515U;
unsigned int var_12 = 3444957669U;
int zero = 0;
signed char var_13 = (signed char)1;
unsigned int var_14 = 1816894121U;
unsigned int var_15 = 618876383U;
signed char var_16 = (signed char)-78;
long long int var_17 = -326520360078514687LL;
unsigned char var_18 = (unsigned char)19;
unsigned char var_19 = (unsigned char)78;
long long int var_20 = 3318991938610134555LL;
signed char var_21 = (signed char)43;
signed char var_22 = (signed char)-55;
signed char var_23 = (signed char)-47;
unsigned long long int var_24 = 5076248203238987856ULL;
unsigned long long int arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned long long int arr_12 [23] ;
signed char arr_3 [13] ;
signed char arr_4 [13] ;
short arr_10 [13] [13] ;
short arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3553211949071778779ULL : 17183222294852397224ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 7141851908066382210ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)13 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-54 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31736 : (short)-10493;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-11133 : (short)-25201;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
