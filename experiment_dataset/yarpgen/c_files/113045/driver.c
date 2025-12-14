#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6047379073522800156LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-84;
long long int var_9 = 7065993585612181051LL;
int var_10 = 1029621410;
unsigned int var_12 = 2472526898U;
long long int var_15 = -7067734371681705309LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = 8071075401501129515LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-13605;
long long int arr_1 [10] ;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -8958933130447359243LL : -4878768839856397650LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -413245425 : -1906783965;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
