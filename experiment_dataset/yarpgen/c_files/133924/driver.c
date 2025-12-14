#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2207980233U;
unsigned long long int var_1 = 2639293410525038179ULL;
unsigned short var_2 = (unsigned short)51565;
int var_3 = -1074525709;
unsigned int var_6 = 3871901517U;
unsigned int var_7 = 1522724889U;
unsigned char var_8 = (unsigned char)100;
long long int var_10 = -1804940725382157266LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1139290394;
signed char var_13 = (signed char)45;
_Bool var_14 = (_Bool)0;
short var_15 = (short)12629;
_Bool arr_0 [21] [21] ;
unsigned short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)36341;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
