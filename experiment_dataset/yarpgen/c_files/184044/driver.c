#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26211;
unsigned char var_4 = (unsigned char)159;
unsigned char var_6 = (unsigned char)77;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2393334728U;
int zero = 0;
short var_14 = (short)16314;
short var_15 = (short)30010;
short var_16 = (short)32638;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)160;
unsigned char var_19 = (unsigned char)169;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)38335;
short arr_0 [17] [17] ;
long long int arr_1 [17] ;
_Bool arr_2 [17] [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-1328;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 903433099370032715LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1727419579617291666LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
