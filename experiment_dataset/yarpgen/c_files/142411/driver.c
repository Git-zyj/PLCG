#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 939228315;
int var_1 = 178209804;
int var_2 = -500127234;
short var_4 = (short)-2148;
int var_6 = 1173055586;
int var_7 = -971338878;
int var_10 = 411119845;
int var_12 = 28701721;
int var_13 = 1633606587;
int zero = 0;
short var_14 = (short)17818;
short var_15 = (short)27240;
unsigned char var_16 = (unsigned char)135;
short var_17 = (short)-15311;
unsigned char var_18 = (unsigned char)106;
short var_19 = (short)6277;
int var_20 = 1292421862;
unsigned char var_21 = (unsigned char)27;
unsigned char arr_0 [20] ;
short arr_1 [20] ;
int arr_2 [20] [20] ;
short arr_5 [10] ;
int arr_6 [10] ;
unsigned char arr_9 [16] ;
unsigned char arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-6064 : (short)-18222;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -2067563338;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)5332;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -292234116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)27;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
