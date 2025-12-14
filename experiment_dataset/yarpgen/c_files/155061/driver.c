#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 69432866U;
signed char var_1 = (signed char)-23;
int var_3 = 1182228296;
unsigned int var_6 = 3675009532U;
unsigned int var_8 = 1249326842U;
unsigned int var_10 = 2091002134U;
unsigned long long int var_12 = 18191515544030128288ULL;
unsigned int var_13 = 377198467U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)1;
int zero = 0;
unsigned long long int var_16 = 15566982645259304071ULL;
unsigned char var_17 = (unsigned char)229;
long long int var_18 = 7295740167471231194LL;
long long int var_19 = 2073444896177915423LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7368008108262313164LL;
long long int arr_3 [14] [14] ;
unsigned int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2011670863225706092LL : -458283333419361194LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4041980164U : 1667049644U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
