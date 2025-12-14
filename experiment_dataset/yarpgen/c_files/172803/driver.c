#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)49872;
int var_5 = 1207145195;
_Bool var_8 = (_Bool)0;
short var_13 = (short)-8208;
short var_14 = (short)-25281;
int zero = 0;
unsigned long long int var_15 = 15333108712456748891ULL;
unsigned long long int var_16 = 15478546115738644538ULL;
unsigned long long int var_17 = 14728927184122216610ULL;
int var_18 = -1245171119;
short var_19 = (short)-14552;
unsigned long long int var_20 = 1493009854745465799ULL;
int var_21 = 564979745;
short var_22 = (short)-18683;
long long int arr_4 [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -2523232691097467541LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2033655038;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
