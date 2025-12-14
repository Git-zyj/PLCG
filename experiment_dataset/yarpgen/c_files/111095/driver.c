#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2004916254;
int var_7 = -433834070;
unsigned int var_9 = 1423823403U;
long long int var_10 = -4618329951316706319LL;
unsigned int var_11 = 1050261424U;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)-54;
int zero = 0;
long long int var_19 = 6269103386510993415LL;
unsigned int var_20 = 1548448908U;
long long int var_21 = 2182744997351810604LL;
int var_22 = 2096063276;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-98;
short var_25 = (short)20412;
long long int var_26 = -379036469790799700LL;
_Bool var_27 = (_Bool)0;
unsigned int arr_0 [11] [11] ;
long long int arr_1 [11] ;
unsigned char arr_4 [15] ;
long long int arr_5 [15] [15] ;
unsigned char arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1631844787U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -3270903107135874467LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3255964418066218347LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)144;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
