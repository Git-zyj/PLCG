#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1622155182U;
signed char var_4 = (signed char)113;
long long int var_6 = -3560939201492381732LL;
signed char var_7 = (signed char)-103;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)50;
unsigned long long int var_11 = 4684365179183746078ULL;
unsigned long long int var_12 = 10517494163696923469ULL;
int var_14 = 1532589169;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1795354479;
short var_21 = (short)-18950;
signed char var_22 = (signed char)-48;
int var_23 = 1504226943;
unsigned short var_24 = (unsigned short)53385;
long long int var_25 = -5330750392699331961LL;
signed char var_26 = (signed char)108;
_Bool arr_1 [24] ;
long long int arr_3 [24] [24] ;
signed char arr_7 [10] ;
short arr_4 [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 3137534197734572784LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)7231;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)34149;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
