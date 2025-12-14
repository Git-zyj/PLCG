#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15960748263155308518ULL;
unsigned char var_5 = (unsigned char)186;
_Bool var_6 = (_Bool)0;
long long int var_9 = 1538919512215391477LL;
unsigned int var_10 = 774299532U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)88;
long long int var_17 = 1759864417205919765LL;
unsigned short var_18 = (unsigned short)44314;
unsigned int arr_0 [16] ;
_Bool arr_2 [16] ;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2604127077U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5360135319552656848ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
