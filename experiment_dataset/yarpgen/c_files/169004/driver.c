#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
int var_2 = 568192549;
signed char var_11 = (signed char)54;
_Bool var_12 = (_Bool)1;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
int var_19 = 1718957558;
_Bool var_20 = (_Bool)0;
int var_21 = 692337427;
long long int var_22 = -3685861796705080232LL;
signed char var_23 = (signed char)86;
long long int var_24 = 4848003205397196327LL;
unsigned int arr_0 [13] ;
signed char arr_1 [13] ;
long long int arr_2 [13] [13] ;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1790480662U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 4243569766344542815LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)66;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
