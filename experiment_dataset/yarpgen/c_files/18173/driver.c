#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)185;
short var_7 = (short)-14943;
unsigned short var_8 = (unsigned short)18170;
short var_9 = (short)-10725;
int var_12 = -1091035569;
unsigned char var_14 = (unsigned char)58;
unsigned int var_15 = 3945590163U;
short var_17 = (short)-4570;
short var_18 = (short)-10803;
int var_19 = -1842425159;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-5310;
unsigned char var_22 = (unsigned char)77;
short var_23 = (short)-2494;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 13020850495888140270ULL;
_Bool var_27 = (_Bool)1;
int var_28 = 2056506525;
int arr_0 [10] [10] ;
signed char arr_2 [19] [19] ;
_Bool arr_4 [19] ;
unsigned long long int arr_5 [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -999737694;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 6520584370040823743ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 16171687425594638534ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
