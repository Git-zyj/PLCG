#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4060122966U;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8523117211656870630LL;
unsigned char var_4 = (unsigned char)24;
unsigned int var_5 = 207192439U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2005865311U;
unsigned short var_9 = (unsigned short)48293;
signed char var_12 = (signed char)68;
int zero = 0;
unsigned char var_15 = (unsigned char)228;
long long int var_16 = 8555846646006841491LL;
unsigned short var_17 = (unsigned short)21648;
unsigned int var_18 = 4015881965U;
long long int var_19 = 6984762389886133246LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)202;
long long int arr_0 [17] ;
_Bool arr_1 [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -7455391307103448993LL : 7227716810347552628LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2753204127204899437LL : 8083209470207976004LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
