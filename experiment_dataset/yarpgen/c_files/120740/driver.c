#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12465975582754188502ULL;
unsigned short var_1 = (unsigned short)31686;
unsigned int var_3 = 4145819817U;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7595367195625136999LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 684763704U;
long long int var_8 = 7387005649112450402LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)96;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)39586;
short var_16 = (short)-11967;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2047474842U;
long long int var_19 = 1558684948641316841LL;
unsigned short var_20 = (unsigned short)26446;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)36;
unsigned char var_23 = (unsigned char)66;
_Bool var_24 = (_Bool)1;
long long int var_25 = -7190329607420217724LL;
unsigned short arr_9 [24] ;
_Bool arr_10 [24] [24] [24] ;
unsigned long long int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)17985;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 10095211384433922399ULL;
}

void checksum() {
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
