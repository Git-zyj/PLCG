#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
short var_1 = (short)21569;
unsigned int var_2 = 2899532973U;
long long int var_3 = -8668852530838748294LL;
long long int var_4 = -7413760305014795055LL;
long long int var_5 = 4246850176947221640LL;
unsigned short var_6 = (unsigned short)48018;
short var_7 = (short)-32143;
_Bool var_11 = (_Bool)1;
int var_13 = -861332538;
int zero = 0;
short var_14 = (short)-9395;
int var_15 = 1029937341;
unsigned short var_16 = (unsigned short)2657;
unsigned char var_17 = (unsigned char)194;
unsigned char arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)10041;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 317159462U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
