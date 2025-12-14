#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22807;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)2186;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6030973177994702508LL;
short var_5 = (short)-31525;
short var_6 = (short)14263;
unsigned short var_7 = (unsigned short)16347;
unsigned int var_8 = 1223504325U;
unsigned long long int var_9 = 2421002393267836372ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
unsigned char var_11 = (unsigned char)142;
signed char var_12 = (signed char)6;
short var_13 = (short)17661;
signed char var_14 = (signed char)-45;
short var_15 = (short)2279;
int var_16 = 720286626;
unsigned char arr_0 [10] ;
unsigned char arr_2 [10] ;
long long int arr_3 [10] [10] ;
int arr_4 [10] [10] ;
long long int arr_5 [10] [10] ;
unsigned long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 4507881531377114048LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1897480035;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -8436950931598570379LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1297149968208309359ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
