#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8098565132376901055ULL;
long long int var_4 = -5146400256288526210LL;
long long int var_6 = -1037573074345183197LL;
unsigned long long int var_8 = 7823402187449875609ULL;
signed char var_14 = (signed char)11;
int var_15 = -1406509363;
unsigned long long int var_16 = 11256345364115015682ULL;
int zero = 0;
int var_18 = -1997327500;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1183787003U;
int var_21 = -1713712194;
unsigned long long int var_22 = 1780449929876603889ULL;
signed char var_23 = (signed char)41;
unsigned int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3305433583U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
