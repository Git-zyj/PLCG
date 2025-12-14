#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3012142843U;
signed char var_7 = (signed char)-1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 4523581358859064127ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)34178;
signed char var_13 = (signed char)-25;
unsigned char var_14 = (unsigned char)99;
signed char var_15 = (signed char)3;
int var_16 = 1003902231;
short var_17 = (short)-28640;
unsigned long long int var_18 = 11929192030413008171ULL;
long long int var_19 = -3915723528588631160LL;
unsigned int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
unsigned char arr_9 [18] ;
short arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3190744627U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 11977119119424497907ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11759 : (short)5163;
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
