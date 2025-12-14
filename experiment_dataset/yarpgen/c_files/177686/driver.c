#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)240;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3079276695U;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)176;
unsigned long long int var_16 = 11514180280253705801ULL;
unsigned short var_17 = (unsigned short)26033;
unsigned int var_18 = 2056238735U;
long long int var_19 = 3904020898808760037LL;
unsigned int var_20 = 2847087445U;
int var_21 = 948709037;
unsigned char var_22 = (unsigned char)38;
short arr_1 [11] [11] ;
unsigned char arr_3 [16] ;
unsigned char arr_6 [14] ;
long long int arr_4 [16] ;
unsigned short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6520;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7556315794988855960LL : -1470802626437164652LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)32778;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
