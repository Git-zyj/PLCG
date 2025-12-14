#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)77;
int zero = 0;
unsigned char var_20 = (unsigned char)206;
unsigned char var_21 = (unsigned char)238;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)125;
unsigned long long int var_24 = 8608712436281746626ULL;
long long int var_25 = -1733766952720120633LL;
unsigned char var_26 = (unsigned char)75;
unsigned char var_27 = (unsigned char)255;
unsigned char var_28 = (unsigned char)210;
unsigned char var_29 = (unsigned char)128;
signed char var_30 = (signed char)11;
short arr_12 [19] [19] ;
unsigned long long int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (short)30691;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 44722362465217508ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
