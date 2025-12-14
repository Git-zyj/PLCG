#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13680;
short var_2 = (short)30451;
unsigned short var_3 = (unsigned short)13617;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)208;
unsigned char var_7 = (unsigned char)155;
signed char var_8 = (signed char)97;
unsigned int var_10 = 353060017U;
int zero = 0;
int var_14 = 777645287;
long long int var_15 = -4304618285662444410LL;
long long int var_16 = 8372991858665179176LL;
int var_17 = -441380440;
unsigned char var_18 = (unsigned char)134;
int var_19 = -732733463;
short var_20 = (short)-11969;
unsigned long long int var_21 = 2536328361538080328ULL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)3933;
signed char arr_0 [20] ;
unsigned char arr_3 [20] ;
int arr_9 [20] ;
short arr_16 [19] ;
unsigned char arr_17 [19] ;
unsigned int arr_21 [11] [11] ;
unsigned char arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 904044266;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (short)-18660;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 2767332934U : 951107138U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)159;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
