#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 739413608U;
unsigned int var_1 = 2004775729U;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)52029;
signed char var_7 = (signed char)-86;
signed char var_9 = (signed char)115;
long long int var_10 = -4515387504580916081LL;
unsigned char var_11 = (unsigned char)55;
unsigned int var_12 = 1495761258U;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)10511;
unsigned int var_15 = 13286645U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)5;
unsigned int arr_0 [22] ;
unsigned int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3050952667U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 4031926770U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
