#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned short var_1 = (unsigned short)11210;
int var_2 = 1954807306;
unsigned short var_5 = (unsigned short)55502;
unsigned long long int var_6 = 5250196627036450977ULL;
short var_8 = (short)-24951;
unsigned int var_9 = 1712472877U;
unsigned char var_10 = (unsigned char)54;
unsigned char var_12 = (unsigned char)227;
int var_13 = 1619565944;
int var_16 = 1432819485;
int var_18 = -1356515997;
unsigned char var_19 = (unsigned char)208;
int zero = 0;
unsigned long long int var_20 = 5057454132713792531ULL;
signed char var_21 = (signed char)-34;
signed char var_22 = (signed char)10;
unsigned short var_23 = (unsigned short)35260;
signed char var_24 = (signed char)116;
unsigned short var_25 = (unsigned short)2883;
unsigned long long int arr_0 [16] ;
unsigned char arr_1 [16] ;
unsigned char arr_2 [16] ;
long long int arr_3 [16] ;
unsigned char arr_4 [16] [16] [16] ;
int arr_7 [16] [16] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 9295320485556122137ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -691881474600005091LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1982917214 : 1164329485;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 7363072258697461062ULL : 900311056355539748ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
