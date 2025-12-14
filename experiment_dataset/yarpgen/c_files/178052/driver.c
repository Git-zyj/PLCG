#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 691562589U;
unsigned long long int var_1 = 1728903461165801960ULL;
short var_2 = (short)-7726;
short var_9 = (short)32138;
short var_10 = (short)29757;
short var_14 = (short)27585;
short var_15 = (short)23524;
int zero = 0;
unsigned long long int var_16 = 16733008380268085052ULL;
unsigned long long int var_17 = 11030839962226613365ULL;
unsigned long long int var_18 = 10258143671290530754ULL;
unsigned char var_19 = (unsigned char)58;
short var_20 = (short)7866;
unsigned int arr_1 [24] ;
long long int arr_5 [24] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1228594892U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6746427655849941901LL : -3125221255254950376LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1757551350349910318ULL : 2893989820641341761ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
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
