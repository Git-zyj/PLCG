#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned int var_1 = 4200105782U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)11234;
unsigned int var_5 = 3444380203U;
short var_8 = (short)-9166;
unsigned short var_10 = (unsigned short)36142;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5160202149247400136LL;
long long int var_16 = -8685003414261825756LL;
long long int var_17 = -1543965958471489256LL;
int var_18 = -1735579650;
unsigned long long int var_19 = 11901147163427963460ULL;
short var_20 = (short)-23040;
signed char var_21 = (signed char)-82;
_Bool arr_2 [24] ;
unsigned long long int arr_3 [24] ;
int arr_6 [20] ;
signed char arr_7 [20] ;
int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1457289358562474364ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 98336715 : -1944110800;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1666080823 : 1452396260;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
