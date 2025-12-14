#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
unsigned short var_1 = (unsigned short)19671;
signed char var_4 = (signed char)91;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3440505232U;
unsigned char var_7 = (unsigned char)184;
short var_8 = (short)-1815;
long long int var_10 = -6845642203316383608LL;
long long int var_11 = 4568209926443663054LL;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
unsigned long long int var_13 = 13445317772165661657ULL;
unsigned char var_14 = (unsigned char)68;
_Bool var_15 = (_Bool)1;
unsigned char arr_1 [24] ;
long long int arr_4 [24] ;
unsigned long long int arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2242452810049223992LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 16368080960213787699ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
