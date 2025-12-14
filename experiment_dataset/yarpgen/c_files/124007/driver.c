#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64827;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6792853352792637363LL;
unsigned int var_5 = 2435143884U;
long long int var_6 = -5107231795791145655LL;
short var_8 = (short)-10564;
long long int var_9 = 7300607495173865323LL;
int var_10 = -1758991677;
int zero = 0;
short var_12 = (short)-15852;
long long int var_13 = -2099404630102121415LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 504732042800707775ULL;
signed char var_18 = (signed char)15;
_Bool var_19 = (_Bool)1;
_Bool arr_1 [11] [11] ;
unsigned short arr_7 [12] ;
signed char arr_15 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)11303;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)67;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
