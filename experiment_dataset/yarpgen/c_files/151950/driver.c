#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16081734684010522487ULL;
unsigned short var_1 = (unsigned short)8846;
int var_2 = 24933616;
unsigned short var_4 = (unsigned short)36496;
short var_5 = (short)-30048;
unsigned int var_6 = 1700598073U;
unsigned int var_7 = 1444659402U;
_Bool var_9 = (_Bool)0;
int var_11 = -1645616555;
unsigned int var_13 = 298723732U;
int zero = 0;
int var_14 = -429722984;
long long int var_15 = -6567575637525040231LL;
unsigned int var_16 = 2437507958U;
unsigned long long int arr_3 [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 12038592774264222097ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
