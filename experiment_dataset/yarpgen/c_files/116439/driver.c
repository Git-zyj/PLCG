#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3726310603173809367ULL;
unsigned char var_1 = (unsigned char)61;
short var_2 = (short)9343;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3623527471U;
short var_7 = (short)2348;
unsigned short var_8 = (unsigned short)38202;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2602499660U;
unsigned int var_13 = 1306608635U;
unsigned int var_14 = 1277116047U;
int zero = 0;
unsigned char var_15 = (unsigned char)27;
unsigned short var_16 = (unsigned short)36266;
unsigned short var_17 = (unsigned short)21867;
unsigned int var_18 = 1871481828U;
unsigned short var_19 = (unsigned short)48697;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 289066202216758113ULL;
unsigned int var_22 = 468987779U;
unsigned int var_23 = 1627599919U;
unsigned int var_24 = 2245923561U;
signed char arr_3 [24] ;
short arr_5 [24] [24] [24] ;
int arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-19758 : (short)-19435;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1837506654 : -2109905525;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
