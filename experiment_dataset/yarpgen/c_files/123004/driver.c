#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)26873;
_Bool var_6 = (_Bool)0;
unsigned long long int var_16 = 11428571860416661370ULL;
short var_17 = (short)31356;
unsigned short var_19 = (unsigned short)13983;
int zero = 0;
unsigned long long int var_20 = 16799817229385955752ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)18373;
unsigned char var_23 = (unsigned char)45;
unsigned short var_24 = (unsigned short)43467;
unsigned char var_25 = (unsigned char)229;
_Bool arr_0 [17] ;
int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -725987903;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
