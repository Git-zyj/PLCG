#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2470916889U;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_12 = 2435923097U;
unsigned short var_16 = (unsigned short)63545;
int zero = 0;
unsigned int var_17 = 166749780U;
unsigned int var_18 = 3097006476U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)147;
short arr_4 [24] ;
unsigned char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-20176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)71;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
