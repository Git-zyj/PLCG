#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned char var_2 = (unsigned char)36;
unsigned char var_3 = (unsigned char)211;
unsigned char var_8 = (unsigned char)212;
unsigned long long int var_14 = 12010720394174456968ULL;
int zero = 0;
unsigned long long int var_15 = 14931862689564072209ULL;
unsigned char var_16 = (unsigned char)74;
long long int var_17 = 3446729596760850956LL;
unsigned int var_18 = 2009611647U;
unsigned char var_19 = (unsigned char)234;
signed char var_20 = (signed char)-71;
unsigned char var_21 = (unsigned char)231;
unsigned long long int arr_1 [24] ;
unsigned char arr_2 [24] ;
unsigned short arr_6 [23] ;
signed char arr_7 [23] ;
unsigned short arr_3 [24] [24] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7695930454863032822ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34856 : (unsigned short)36750;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)528;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)31;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
