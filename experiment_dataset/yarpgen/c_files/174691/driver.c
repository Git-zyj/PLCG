#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 308731254;
int var_3 = -1351807194;
_Bool var_4 = (_Bool)0;
signed char var_11 = (signed char)-107;
signed char var_12 = (signed char)-13;
unsigned short var_15 = (unsigned short)50963;
int var_17 = -1223175988;
int zero = 0;
int var_19 = 230843546;
unsigned long long int var_20 = 16362316878673425107ULL;
_Bool var_21 = (_Bool)1;
int var_22 = -1255728825;
int var_23 = -350698544;
int var_24 = -86090736;
_Bool arr_0 [17] [17] ;
_Bool arr_1 [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-11;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
