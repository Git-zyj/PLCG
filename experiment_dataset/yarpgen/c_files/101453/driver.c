#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3258052781U;
_Bool var_1 = (_Bool)1;
long long int var_2 = -5067799555397581512LL;
unsigned char var_4 = (unsigned char)66;
unsigned char var_5 = (unsigned char)249;
long long int var_6 = 12680316584208788LL;
_Bool var_7 = (_Bool)0;
int var_9 = -673893972;
short var_10 = (short)(-32767 - 1);
unsigned char var_11 = (unsigned char)140;
signed char var_12 = (signed char)85;
long long int var_13 = 6110654456658060508LL;
unsigned int var_15 = 683026750U;
int zero = 0;
unsigned short var_16 = (unsigned short)18841;
short var_17 = (short)-2911;
unsigned long long int var_18 = 17645129050995992053ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-42;
unsigned char arr_5 [13] ;
signed char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)-113;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
