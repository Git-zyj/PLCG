#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
signed char var_1 = (signed char)29;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7843447550720363353ULL;
unsigned short var_6 = (unsigned short)37642;
signed char var_7 = (signed char)40;
unsigned short var_8 = (unsigned short)18657;
short var_9 = (short)22041;
int var_10 = -48826224;
short var_12 = (short)28974;
int zero = 0;
unsigned int var_13 = 1402314809U;
unsigned long long int var_14 = 17984425692354611000ULL;
short var_15 = (short)10852;
unsigned short var_16 = (unsigned short)55942;
int var_17 = 1089168300;
short var_18 = (short)25980;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)16;
unsigned short var_21 = (unsigned short)7911;
signed char var_22 = (signed char)95;
unsigned long long int var_23 = 7919987783287215174ULL;
_Bool var_24 = (_Bool)0;
unsigned int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
int arr_4 [17] [17] [17] ;
unsigned short arr_5 [17] [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] ;
unsigned int arr_7 [17] ;
long long int arr_8 [17] ;
_Bool arr_12 [17] ;
int arr_22 [20] ;
long long int arr_11 [17] ;
short arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2068836230U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 866282375626218797ULL : 18350569030037656114ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1355770880 : -1948657371;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)54640 : (unsigned short)27940;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 18353792906465006587ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 382327289U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -9185966373960986637LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 742884768;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -161979018657263347LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)22016 : (short)21919;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
