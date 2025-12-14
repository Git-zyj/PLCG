#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26217;
unsigned char var_5 = (unsigned char)214;
short var_6 = (short)21860;
unsigned short var_7 = (unsigned short)2407;
int var_8 = 1274461646;
short var_9 = (short)20224;
signed char var_10 = (signed char)-54;
unsigned int var_13 = 2241757483U;
int var_14 = 1171848136;
int var_15 = 2079818424;
int var_16 = -703711550;
unsigned int var_17 = 52193823U;
short var_18 = (short)18722;
signed char var_19 = (signed char)-12;
int zero = 0;
long long int var_20 = 8298277645232919735LL;
unsigned short var_21 = (unsigned short)48997;
unsigned short var_22 = (unsigned short)43277;
short var_23 = (short)27283;
signed char var_24 = (signed char)57;
unsigned long long int var_25 = 9457478387977476244ULL;
int arr_6 [16] ;
unsigned short arr_10 [16] [16] [16] ;
short arr_12 [16] [16] ;
signed char arr_4 [23] ;
unsigned int arr_21 [16] ;
unsigned char arr_22 [16] ;
_Bool arr_23 [16] ;
unsigned int arr_24 [16] [16] ;
unsigned int arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 710656238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)48724 : (unsigned short)33878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-3583;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1973952937U : 526807330U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = 4233046860U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 1074210536U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
