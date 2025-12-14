#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)176;
long long int var_3 = 7301453916644568688LL;
short var_4 = (short)-31985;
long long int var_5 = 2626853589362851813LL;
long long int var_7 = 7034965589323566344LL;
long long int var_8 = 145739613969343154LL;
unsigned short var_9 = (unsigned short)24668;
short var_12 = (short)-3258;
unsigned short var_16 = (unsigned short)8548;
short var_18 = (short)22679;
int zero = 0;
unsigned char var_19 = (unsigned char)149;
short var_20 = (short)-15805;
unsigned short var_21 = (unsigned short)59177;
signed char var_22 = (signed char)31;
long long int var_23 = -1277037100022894468LL;
_Bool var_24 = (_Bool)0;
signed char arr_0 [10] ;
int arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 174110833;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)241;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
