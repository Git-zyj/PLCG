#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned char var_2 = (unsigned char)9;
unsigned int var_5 = 2430372994U;
unsigned char var_6 = (unsigned char)189;
short var_8 = (short)9239;
short var_9 = (short)-26977;
unsigned long long int var_10 = 17378777554499539922ULL;
unsigned short var_11 = (unsigned short)42470;
int zero = 0;
short var_13 = (short)21993;
int var_14 = -2041140344;
unsigned char var_15 = (unsigned char)41;
short var_16 = (short)-27927;
short var_17 = (short)-1891;
short var_18 = (short)-19236;
int var_19 = 590888901;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)33250;
unsigned char var_22 = (unsigned char)154;
unsigned int arr_2 [15] ;
unsigned char arr_3 [12] ;
_Bool arr_4 [12] ;
long long int arr_7 [12] [12] ;
unsigned char arr_5 [12] ;
unsigned char arr_8 [12] ;
unsigned int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1984690436U : 357149346U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 4487293374415269415LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 1927778516U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
