#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)17079;
unsigned char var_9 = (unsigned char)219;
short var_11 = (short)-2279;
unsigned int var_13 = 3202846919U;
int zero = 0;
unsigned long long int var_14 = 14329751581805244077ULL;
unsigned int var_15 = 1387283154U;
unsigned long long int var_16 = 18131258369473252248ULL;
unsigned long long int var_17 = 11214193568991944132ULL;
int arr_0 [12] ;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1511164280 : 752295499;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2107534884U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
