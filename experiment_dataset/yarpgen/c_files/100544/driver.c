#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -173536659;
unsigned int var_1 = 3056415253U;
unsigned int var_4 = 1769750725U;
unsigned char var_5 = (unsigned char)115;
int var_6 = -2035615984;
unsigned int var_11 = 1010845106U;
unsigned short var_12 = (unsigned short)36181;
int var_13 = -1543733848;
unsigned short var_14 = (unsigned short)29810;
int var_17 = -1550974057;
signed char var_19 = (signed char)4;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)50862;
unsigned int var_22 = 2614177799U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)78;
short var_25 = (short)-13099;
unsigned short var_26 = (unsigned short)41718;
unsigned char arr_0 [15] ;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -5978507692116280199LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
