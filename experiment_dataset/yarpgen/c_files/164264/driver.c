#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)191;
int var_7 = 755189242;
long long int var_9 = -2323294253353940928LL;
_Bool var_11 = (_Bool)1;
int var_12 = 104129359;
int var_13 = -1246694411;
int zero = 0;
signed char var_16 = (signed char)-56;
int var_17 = -302228808;
unsigned char var_18 = (unsigned char)1;
signed char var_19 = (signed char)-75;
unsigned short var_20 = (unsigned short)39928;
int arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1597163454 : 2012586076;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
