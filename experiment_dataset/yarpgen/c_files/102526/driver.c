#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)67;
signed char var_4 = (signed char)38;
long long int var_5 = 8509809779377498667LL;
int var_6 = -47594250;
signed char var_7 = (signed char)126;
unsigned short var_9 = (unsigned short)22390;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 14975296507847531094ULL;
unsigned long long int var_15 = 4954986738146915975ULL;
unsigned int var_16 = 265397033U;
int zero = 0;
unsigned short var_17 = (unsigned short)14303;
unsigned short var_18 = (unsigned short)12753;
unsigned int var_19 = 2300334436U;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] ;
signed char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)6079;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-36;
}

void checksum() {
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
