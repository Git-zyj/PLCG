#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4098016508804690078LL;
unsigned char var_3 = (unsigned char)123;
unsigned char var_13 = (unsigned char)253;
int zero = 0;
short var_18 = (short)-30250;
unsigned char var_19 = (unsigned char)170;
unsigned short arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)6574;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 11963723285856055780ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1020516797095146423ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
