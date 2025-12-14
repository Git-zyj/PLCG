#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8460712180541030121LL;
short var_2 = (short)8279;
short var_3 = (short)17906;
unsigned long long int var_8 = 4488730779441736777ULL;
unsigned short var_12 = (unsigned short)62841;
int zero = 0;
int var_17 = 546890149;
int var_18 = -1531539919;
unsigned int var_19 = 1800241442U;
_Bool var_20 = (_Bool)1;
unsigned int arr_0 [24] ;
unsigned short arr_1 [24] ;
signed char arr_2 [24] [24] ;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1041049518U : 2393846364U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)25217;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-32 : (signed char)-74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
