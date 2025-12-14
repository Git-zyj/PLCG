#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22425;
long long int var_3 = -3374214068920838867LL;
unsigned int var_5 = 533837182U;
long long int var_8 = 6226051114446151478LL;
short var_9 = (short)-21605;
int zero = 0;
unsigned short var_11 = (unsigned short)27764;
unsigned char var_12 = (unsigned char)85;
signed char var_13 = (signed char)122;
_Bool var_14 = (_Bool)1;
short arr_1 [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)1467;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1423977889U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
