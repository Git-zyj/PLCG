#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29455;
int var_1 = -1625447565;
unsigned char var_2 = (unsigned char)37;
unsigned short var_3 = (unsigned short)59890;
long long int var_4 = -1405950172629660279LL;
unsigned int var_5 = 4278383957U;
unsigned char var_6 = (unsigned char)216;
long long int var_7 = -3754005800509176821LL;
unsigned long long int var_8 = 16288541792104044063ULL;
unsigned int var_9 = 2345954393U;
unsigned long long int var_11 = 11747554982739547642ULL;
signed char var_13 = (signed char)65;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -2051849056;
unsigned int var_16 = 1775014831U;
long long int var_17 = 6405696525743447719LL;
unsigned long long int var_18 = 11544175165910814399ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 228192984U;
long long int arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
_Bool arr_4 [18] [18] [18] ;
int arr_6 [18] [18] [18] ;
_Bool arr_7 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -5291115569818748312LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)24102;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 640301000U : 1471527948U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1623955529 : -40679886;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
