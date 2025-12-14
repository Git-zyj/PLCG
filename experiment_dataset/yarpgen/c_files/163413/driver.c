#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10440;
unsigned short var_2 = (unsigned short)42309;
unsigned long long int var_3 = 13429989646381090845ULL;
unsigned short var_7 = (unsigned short)16990;
unsigned short var_9 = (unsigned short)18294;
short var_10 = (short)32540;
unsigned long long int var_11 = 2715671436302695070ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2142803881363470484LL;
int zero = 0;
long long int var_14 = 3480997538555240681LL;
long long int var_15 = 5236812802375191970LL;
long long int var_16 = 4428709269902104850LL;
int var_17 = 1733250687;
unsigned short var_18 = (unsigned short)5663;
long long int arr_1 [10] ;
short arr_4 [10] ;
long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1830448242233023923LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-5711;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -2778076892107876174LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
