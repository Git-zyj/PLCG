#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3147052463U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)52;
unsigned char var_16 = (unsigned char)191;
long long int var_17 = -160560818077060577LL;
unsigned short var_18 = (unsigned short)10122;
unsigned long long int arr_2 [11] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 13151502234502012988ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -8927174158842578284LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
