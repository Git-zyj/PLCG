#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3521406555U;
unsigned int var_2 = 1245438407U;
_Bool var_5 = (_Bool)1;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
unsigned long long int var_19 = 15664643570021956563ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)104;
unsigned long long int var_22 = 3122914374786402941ULL;
unsigned long long int arr_2 [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 13424141141983028460ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)165;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
