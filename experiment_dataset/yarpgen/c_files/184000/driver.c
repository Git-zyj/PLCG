#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9864;
signed char var_4 = (signed char)-57;
int var_5 = -437828120;
short var_6 = (short)-22998;
unsigned short var_8 = (unsigned short)40072;
short var_9 = (short)-18946;
unsigned short var_11 = (unsigned short)16321;
short var_12 = (short)-17036;
int var_13 = -68880169;
unsigned long long int var_14 = 3789060011777752780ULL;
signed char var_17 = (signed char)-44;
int var_18 = -606092926;
int zero = 0;
int var_19 = -1406995992;
unsigned long long int var_20 = 17421046351774952184ULL;
unsigned short var_21 = (unsigned short)31562;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 4916880941236427925ULL;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-14116;
unsigned short var_26 = (unsigned short)38993;
int var_27 = -856122001;
long long int arr_0 [11] ;
long long int arr_1 [11] [11] ;
short arr_6 [25] ;
unsigned long long int arr_3 [11] ;
unsigned long long int arr_8 [25] ;
short arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7170428405340902604LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 8186537961979466813LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)12472;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 11536326701482794196ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 479071389157350583ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (short)-244;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
