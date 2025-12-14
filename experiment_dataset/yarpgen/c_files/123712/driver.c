#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 975035325252727088LL;
signed char var_8 = (signed char)121;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-14456;
unsigned char var_14 = (unsigned char)161;
int zero = 0;
unsigned short var_19 = (unsigned short)62040;
long long int var_20 = -8630894101866358276LL;
long long int arr_0 [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 8944805631452138237LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -16634156;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
