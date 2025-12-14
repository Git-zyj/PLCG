#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4706412453997037498ULL;
unsigned long long int var_2 = 13737447399084879768ULL;
short var_4 = (short)23001;
unsigned short var_5 = (unsigned short)8048;
unsigned int var_7 = 1301877370U;
unsigned int var_10 = 961900291U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)20512;
int zero = 0;
unsigned short var_15 = (unsigned short)34999;
unsigned int var_16 = 3117170518U;
short var_17 = (short)2470;
unsigned short var_18 = (unsigned short)29973;
signed char var_19 = (signed char)26;
unsigned short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned int arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)164;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 16311848796289704208ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)32560;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2600229334U : 2718463080U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
