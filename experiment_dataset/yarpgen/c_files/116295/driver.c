#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7932918209987567705LL;
long long int var_1 = -4424719262221593177LL;
unsigned long long int var_2 = 4301467865626858992ULL;
long long int var_3 = 2072065507684846259LL;
unsigned long long int var_4 = 16090673824032708750ULL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-2133;
int zero = 0;
int var_15 = -404407640;
unsigned int var_16 = 2173605917U;
unsigned long long int var_17 = 12555475904494514250ULL;
unsigned int var_18 = 2422361428U;
short var_19 = (short)24852;
short var_20 = (short)-6188;
long long int var_21 = 4736061330549821141LL;
_Bool var_22 = (_Bool)0;
int arr_2 [21] ;
short arr_3 [21] ;
unsigned long long int arr_6 [21] ;
long long int arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 682750912 : 1890691570;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-31714;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 286824255359732412ULL : 10195398172457938728ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8850929321201355291LL : -5437223324062046515LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
