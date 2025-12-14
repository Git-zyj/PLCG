#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)190;
short var_7 = (short)-10472;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-77;
long long int var_19 = 2035093248963405881LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-5401;
unsigned long long int var_22 = 17232707334216437468ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int arr_2 [24] ;
_Bool arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14791528948483948648ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
