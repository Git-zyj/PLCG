#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)18488;
unsigned long long int var_4 = 15649646751851345100ULL;
int var_5 = 1498856454;
unsigned char var_8 = (unsigned char)96;
unsigned long long int var_9 = 7315014560966023013ULL;
unsigned char var_11 = (unsigned char)24;
unsigned char var_12 = (unsigned char)143;
unsigned short var_13 = (unsigned short)59748;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = 1451725493;
int zero = 0;
unsigned int var_19 = 1365343595U;
int var_20 = -1963443045;
unsigned char var_21 = (unsigned char)41;
unsigned long long int var_22 = 4882361990596577246ULL;
int var_23 = 258041791;
long long int arr_0 [20] [20] ;
unsigned int arr_1 [20] [20] ;
unsigned short arr_3 [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -1820608736309812976LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 4151158881U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)53156;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 14711260716798748587ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6415062281628676404ULL : 6152339977169924624ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
