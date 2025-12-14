#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 548522191;
unsigned long long int var_3 = 11959798555891860878ULL;
unsigned short var_4 = (unsigned short)30921;
long long int var_10 = 7042026951909037602LL;
unsigned short var_11 = (unsigned short)22180;
int zero = 0;
unsigned int var_14 = 900225978U;
long long int var_15 = 8209821255464931734LL;
long long int var_16 = -4654869580213590700LL;
unsigned short var_17 = (unsigned short)2005;
unsigned int arr_0 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned short arr_3 [12] [12] ;
short arr_5 [12] [12] ;
unsigned short arr_7 [12] ;
unsigned char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 117154581U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)28749;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)25826;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)6318;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)168;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
