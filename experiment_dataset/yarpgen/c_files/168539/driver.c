#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1280045286;
unsigned long long int var_1 = 11044180031961968873ULL;
signed char var_2 = (signed char)-78;
unsigned char var_5 = (unsigned char)204;
unsigned short var_6 = (unsigned short)45707;
unsigned short var_7 = (unsigned short)38002;
long long int var_8 = -3043773124015818775LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)26304;
long long int var_12 = -5566304648600901599LL;
int var_13 = 1413894833;
unsigned char var_14 = (unsigned char)38;
long long int var_15 = -1449317804402338069LL;
unsigned char var_16 = (unsigned char)242;
int zero = 0;
unsigned char var_17 = (unsigned char)164;
unsigned long long int var_18 = 16526813881004774882ULL;
long long int var_19 = -3238611098468938756LL;
long long int var_20 = 670274134131579915LL;
short var_21 = (short)26537;
unsigned char var_22 = (unsigned char)173;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 745936550U;
unsigned char arr_0 [23] ;
short arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
signed char arr_6 [23] [23] ;
short arr_7 [23] ;
long long int arr_8 [23] [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] [23] ;
long long int arr_10 [23] [23] [23] ;
short arr_16 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-4134;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)38574;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)17287;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -9010143669316213656LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2039127337U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -4432304937303018939LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)31243 : (short)1615;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
