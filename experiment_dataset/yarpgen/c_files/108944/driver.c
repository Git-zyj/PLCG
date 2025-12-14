#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1911457183;
signed char var_3 = (signed char)-6;
long long int var_4 = -5100621348561988526LL;
signed char var_6 = (signed char)8;
long long int var_8 = -7451255975458888351LL;
unsigned int var_10 = 1492104546U;
int zero = 0;
unsigned char var_11 = (unsigned char)200;
unsigned int var_12 = 3810475338U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)23932;
signed char var_15 = (signed char)63;
long long int var_16 = 8418182585351524109LL;
_Bool var_17 = (_Bool)0;
_Bool arr_0 [25] ;
unsigned int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 523188361U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 8180861015155671639ULL;
}

void checksum() {
    hash(&seed, var_11);
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
