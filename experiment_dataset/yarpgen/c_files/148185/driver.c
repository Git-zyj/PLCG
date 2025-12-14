#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6021729718544887837ULL;
short var_1 = (short)2396;
unsigned short var_2 = (unsigned short)53038;
unsigned short var_3 = (unsigned short)3739;
unsigned short var_4 = (unsigned short)38659;
long long int var_5 = 50013091513801172LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-31210;
unsigned int var_9 = 2960167985U;
int zero = 0;
long long int var_11 = 9209540721209781670LL;
unsigned short var_12 = (unsigned short)42135;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)85;
_Bool arr_6 [14] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1669006967062536836ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
