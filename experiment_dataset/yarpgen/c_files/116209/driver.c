#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
long long int var_2 = -8802757947412514294LL;
_Bool var_3 = (_Bool)0;
int var_4 = 1767171020;
long long int var_5 = 1819912024147564885LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2115249852216215709LL;
int var_10 = -1535374341;
unsigned int var_11 = 1595395119U;
unsigned char var_12 = (unsigned char)62;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1843489538;
int var_15 = -142371426;
unsigned long long int var_16 = 5924427124765220207ULL;
unsigned int var_17 = 334945483U;
int var_18 = 1194011499;
unsigned char var_19 = (unsigned char)91;
_Bool var_20 = (_Bool)1;
int var_21 = 487869747;
long long int var_22 = -1382735801597750045LL;
unsigned char arr_0 [16] ;
unsigned char arr_1 [16] ;
_Bool arr_2 [12] [12] ;
_Bool arr_3 [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 3078991698U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
