#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
signed char var_6 = (signed char)-73;
int zero = 0;
unsigned long long int var_12 = 15529037345296985878ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11313948546682946660ULL;
unsigned int var_15 = 1999132296U;
unsigned int var_16 = 4204907610U;
unsigned long long int var_17 = 10416446702230330960ULL;
short arr_0 [21] ;
long long int arr_2 [21] ;
unsigned char arr_3 [24] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-23654;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -4858172165971238164LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)16794;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
