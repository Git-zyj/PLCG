#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
long long int var_2 = 13347013773478569LL;
int var_3 = 528693737;
unsigned char var_4 = (unsigned char)223;
unsigned int var_6 = 1017056223U;
unsigned char var_8 = (unsigned char)204;
long long int var_9 = -4182373249530360060LL;
unsigned short var_10 = (unsigned short)45051;
long long int var_12 = 967216135701024778LL;
unsigned short var_13 = (unsigned short)51281;
short var_14 = (short)17854;
int zero = 0;
unsigned short var_15 = (unsigned short)18140;
unsigned char var_16 = (unsigned char)211;
unsigned short var_17 = (unsigned short)34839;
long long int var_18 = -3856900475218221954LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)18836;
unsigned long long int var_21 = 11910799610309024653ULL;
signed char arr_0 [16] ;
unsigned char arr_1 [16] ;
short arr_5 [16] [16] ;
unsigned char arr_7 [16] [16] [16] ;
_Bool arr_2 [16] ;
short arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (short)28856;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)237 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-2602 : (short)-28899;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
