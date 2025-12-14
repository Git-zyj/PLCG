#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63770;
unsigned short var_3 = (unsigned short)41599;
unsigned char var_4 = (unsigned char)1;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)5811;
int var_8 = 903247896;
unsigned short var_10 = (unsigned short)33673;
unsigned long long int var_11 = 12080693932104155774ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)193;
int var_13 = 822464846;
int var_14 = 1743739221;
unsigned char var_15 = (unsigned char)241;
signed char var_16 = (signed char)-46;
long long int var_17 = 8459396776314527006LL;
unsigned char var_18 = (unsigned char)77;
unsigned int var_19 = 278123113U;
unsigned short var_20 = (unsigned short)25887;
unsigned long long int var_21 = 4383655309762293651ULL;
unsigned long long int var_22 = 16176529230921596278ULL;
short var_23 = (short)6481;
unsigned short var_24 = (unsigned short)7152;
short arr_0 [22] [22] ;
_Bool arr_1 [22] [22] ;
short arr_3 [22] [22] [22] ;
long long int arr_5 [21] ;
signed char arr_7 [21] [21] ;
unsigned char arr_4 [22] [22] [22] ;
unsigned char arr_8 [21] ;
_Bool arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)16476;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-18425;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -5906487361762963594LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
