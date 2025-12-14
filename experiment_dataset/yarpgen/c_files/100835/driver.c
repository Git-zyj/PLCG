#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned int var_4 = 660701362U;
int var_5 = 351054806;
long long int var_6 = 1288105284851868441LL;
long long int var_7 = -8429442177360479181LL;
short var_13 = (short)-32543;
unsigned char var_14 = (unsigned char)184;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)40051;
unsigned short var_21 = (unsigned short)59092;
unsigned int var_22 = 315543404U;
_Bool var_23 = (_Bool)0;
int var_24 = 1330588639;
int arr_0 [11] [11] ;
short arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 103441711;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)31227;
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
