#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1272836598;
unsigned char var_2 = (unsigned char)128;
int var_3 = -489474174;
unsigned long long int var_5 = 9797028892872926611ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2407510686U;
unsigned long long int var_8 = 652978218536099498ULL;
unsigned int var_11 = 3158940903U;
int zero = 0;
unsigned short var_12 = (unsigned short)2682;
_Bool var_13 = (_Bool)0;
short var_14 = (short)14395;
int var_15 = 625111326;
long long int var_16 = 2820597165325089707LL;
unsigned int var_17 = 1265361493U;
_Bool arr_2 [24] ;
unsigned short arr_5 [24] [24] [24] ;
_Bool arr_6 [24] ;
unsigned short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)45185;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)41737;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
