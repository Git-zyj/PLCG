#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
long long int var_2 = 4294561977434460504LL;
long long int var_3 = 3504436239689159116LL;
signed char var_7 = (signed char)-14;
unsigned int var_8 = 2306328304U;
long long int var_10 = 7676548135753421505LL;
int var_11 = 1847721533;
int zero = 0;
unsigned char var_16 = (unsigned char)73;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10199880716347516473ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)69;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [16] [16] ;
_Bool arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
long long int arr_3 [16] [16] ;
int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)17902;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 9665577988964999546ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -4166836550045130579LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -247241938;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
