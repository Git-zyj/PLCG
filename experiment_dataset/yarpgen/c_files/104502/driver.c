#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1112842053;
unsigned int var_1 = 4171736802U;
signed char var_2 = (signed char)90;
unsigned int var_3 = 97337668U;
unsigned char var_6 = (unsigned char)253;
long long int var_7 = -7059000037566449360LL;
unsigned short var_8 = (unsigned short)60132;
unsigned long long int var_11 = 16033162033894154264ULL;
unsigned long long int var_13 = 16738522948394152723ULL;
int zero = 0;
unsigned long long int var_14 = 9094139191913056346ULL;
int var_15 = -1427125622;
unsigned short var_16 = (unsigned short)23540;
unsigned int var_17 = 3466820263U;
unsigned short var_18 = (unsigned short)8019;
unsigned char var_19 = (unsigned char)182;
unsigned int arr_0 [22] [22] ;
signed char arr_5 [22] [22] ;
unsigned short arr_3 [22] ;
unsigned long long int arr_4 [22] ;
unsigned long long int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 4112844200U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)24800;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 16126478748414777347ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 528610713132615413ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
