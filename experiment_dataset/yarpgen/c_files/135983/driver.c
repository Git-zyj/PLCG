#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6441;
int var_3 = -1381216841;
unsigned char var_4 = (unsigned char)72;
unsigned long long int var_6 = 5348850124697392436ULL;
unsigned char var_7 = (unsigned char)70;
unsigned char var_9 = (unsigned char)52;
int zero = 0;
short var_10 = (short)1308;
short var_11 = (short)7891;
unsigned short var_12 = (unsigned short)12964;
unsigned int var_13 = 633449320U;
unsigned long long int var_14 = 5018676104403982232ULL;
int var_15 = -1307275238;
signed char var_16 = (signed char)-31;
unsigned short var_17 = (unsigned short)49684;
unsigned long long int arr_3 [21] ;
signed char arr_6 [17] ;
unsigned char arr_8 [17] ;
unsigned char arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 5361244351651455053ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)11;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
