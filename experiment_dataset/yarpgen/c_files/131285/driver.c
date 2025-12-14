#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39708;
unsigned char var_7 = (unsigned char)229;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8677082402413366391ULL;
short var_13 = (short)-2615;
int var_14 = 234229083;
int zero = 0;
int var_17 = -1167301450;
long long int var_18 = 3399116423571431215LL;
int var_19 = 277090394;
signed char var_20 = (signed char)-99;
unsigned long long int var_21 = 7022207606376331113ULL;
short var_22 = (short)11681;
int arr_0 [11] [11] ;
short arr_1 [11] ;
unsigned char arr_3 [11] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -1326244452;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-13684;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1431527325;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
