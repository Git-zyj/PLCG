#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17020240711517505368ULL;
unsigned long long int var_1 = 2104221353722125338ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 16380678972087026637ULL;
unsigned int var_5 = 1558371767U;
signed char var_6 = (signed char)54;
unsigned int var_8 = 3809350614U;
int var_12 = -1031563425;
unsigned char var_13 = (unsigned char)165;
unsigned char var_14 = (unsigned char)193;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 18211121983802430357ULL;
unsigned long long int var_17 = 14518247061802595358ULL;
unsigned long long int var_18 = 1147923648573669313ULL;
int zero = 0;
unsigned long long int var_20 = 702656653912597941ULL;
unsigned int var_21 = 3944197972U;
unsigned int var_22 = 1306987131U;
int var_23 = 1387246949;
unsigned char var_24 = (unsigned char)42;
unsigned int var_25 = 1853530898U;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 2889679074289900866ULL;
unsigned char arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)106;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
