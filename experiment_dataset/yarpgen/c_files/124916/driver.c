#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)170;
int var_10 = 890603942;
unsigned long long int var_11 = 5835504293589281096ULL;
short var_12 = (short)11115;
_Bool var_13 = (_Bool)1;
long long int var_18 = -2272188043149936914LL;
int zero = 0;
long long int var_20 = -2455351067061816120LL;
long long int var_21 = 4650308084882439824LL;
unsigned long long int var_22 = 758988453402526477ULL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)92;
short var_25 = (short)-16970;
unsigned long long int arr_6 [16] [16] ;
short arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 6270818407493905809ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)19450;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
