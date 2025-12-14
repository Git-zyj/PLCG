#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9090393078481852755LL;
signed char var_1 = (signed char)31;
long long int var_2 = 5431335753723602975LL;
signed char var_5 = (signed char)-101;
int var_6 = 616027050;
short var_7 = (short)846;
int var_8 = -1741216619;
signed char var_10 = (signed char)104;
unsigned char var_12 = (unsigned char)132;
int zero = 0;
short var_14 = (short)6668;
long long int var_15 = -6992249837684130799LL;
long long int var_16 = 6855915205573024072LL;
unsigned char var_17 = (unsigned char)237;
short var_18 = (short)-3025;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
