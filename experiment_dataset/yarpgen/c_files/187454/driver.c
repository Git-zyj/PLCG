#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 252169723;
unsigned char var_1 = (unsigned char)34;
unsigned char var_2 = (unsigned char)68;
unsigned char var_3 = (unsigned char)147;
unsigned char var_4 = (unsigned char)3;
unsigned int var_5 = 3680971077U;
unsigned char var_6 = (unsigned char)170;
signed char var_7 = (signed char)-37;
_Bool var_8 = (_Bool)1;
int var_9 = -1292264510;
unsigned short var_10 = (unsigned short)31994;
int zero = 0;
short var_11 = (short)5449;
unsigned int var_12 = 2187027470U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)1742;
unsigned long long int var_15 = 6392978926608328414ULL;
long long int var_16 = -5122522734203891816LL;
signed char var_17 = (signed char)-112;
unsigned char var_18 = (unsigned char)206;
signed char arr_0 [25] [25] ;
int arr_1 [25] ;
signed char arr_2 [25] ;
unsigned short arr_5 [16] [16] ;
unsigned short arr_6 [16] ;
signed char arr_10 [22] ;
unsigned short arr_12 [22] [22] [22] ;
unsigned int arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
unsigned short arr_7 [16] ;
long long int arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 377109435;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)50185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)17426;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)60103 : (unsigned short)52738;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2491396070U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)12613;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)3013;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = -4950410586480327948LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
