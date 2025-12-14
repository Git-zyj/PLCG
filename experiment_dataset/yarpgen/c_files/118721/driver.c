#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -186968338423841017LL;
int var_1 = 487328323;
unsigned int var_2 = 1296621544U;
unsigned char var_7 = (unsigned char)49;
unsigned char var_9 = (unsigned char)27;
int var_11 = -1836967648;
signed char var_15 = (signed char)-105;
int var_17 = -303583887;
unsigned int var_18 = 468364026U;
int zero = 0;
int var_19 = 2015121551;
short var_20 = (short)32728;
unsigned char var_21 = (unsigned char)91;
unsigned char var_22 = (unsigned char)119;
unsigned char arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
short arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned char arr_4 [25] [25] ;
unsigned int arr_5 [25] ;
unsigned char arr_6 [25] ;
short arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 10068133053283863435ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-13883;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 11971180461901367560ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)115 : (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2942974912U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)101 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)5132 : (short)-30944;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
