#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9043941934155691968LL;
long long int var_2 = 4259456655639723116LL;
short var_3 = (short)-25668;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)3398;
unsigned short var_11 = (unsigned short)44783;
unsigned int var_12 = 3259840527U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3645435589U;
int zero = 0;
short var_15 = (short)-29942;
int var_16 = 1731331979;
long long int var_17 = -4938395554749467387LL;
short var_18 = (short)-18801;
unsigned char var_19 = (unsigned char)213;
unsigned int var_20 = 3605939304U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)5238;
short var_23 = (short)-20659;
unsigned int var_24 = 2794474188U;
long long int arr_0 [21] [21] ;
unsigned int arr_2 [21] ;
long long int arr_3 [21] ;
short arr_5 [11] ;
unsigned short arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3074712669753510561LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1687612236U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -2819279006322561655LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-9808;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)30855;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
