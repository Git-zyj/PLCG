#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4039500146U;
unsigned char var_11 = (unsigned char)96;
unsigned char var_12 = (unsigned char)205;
int zero = 0;
unsigned short var_16 = (unsigned short)39059;
long long int var_17 = -7771119164798192589LL;
long long int var_18 = 4873696613684258649LL;
int var_19 = 2128770575;
_Bool var_20 = (_Bool)0;
unsigned int arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3583855665U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
