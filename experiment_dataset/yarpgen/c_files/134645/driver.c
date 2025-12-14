#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2570487324U;
signed char var_2 = (signed char)91;
signed char var_3 = (signed char)113;
long long int var_4 = 2410213492372785429LL;
unsigned int var_5 = 316295917U;
unsigned long long int var_6 = 223581009821245668ULL;
signed char var_11 = (signed char)-120;
unsigned int var_12 = 3462680327U;
long long int var_15 = -966383047672265765LL;
int zero = 0;
short var_17 = (short)-4623;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)32;
signed char var_20 = (signed char)-59;
long long int arr_0 [24] ;
signed char arr_1 [24] ;
long long int arr_3 [24] [24] [24] ;
_Bool arr_8 [24] ;
unsigned int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2479324425522075464LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4376103477706423471LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1896580680U : 2390991572U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
