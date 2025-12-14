#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
long long int var_2 = 1951276979329675880LL;
unsigned long long int var_4 = 17225367047917891605ULL;
unsigned short var_11 = (unsigned short)27311;
unsigned long long int var_12 = 8717720629958919288ULL;
signed char var_15 = (signed char)81;
short var_16 = (short)-6111;
int zero = 0;
short var_17 = (short)12354;
unsigned int var_18 = 1234746605U;
signed char var_19 = (signed char)120;
short var_20 = (short)-14760;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
unsigned long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 15557596793305857490ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)16299;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 543305139818047670ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
