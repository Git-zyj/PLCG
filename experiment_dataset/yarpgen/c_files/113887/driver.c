#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56292;
signed char var_5 = (signed char)109;
short var_6 = (short)27896;
unsigned short var_8 = (unsigned short)33419;
signed char var_9 = (signed char)91;
long long int var_12 = 2115674619177439854LL;
int var_13 = -218053997;
unsigned short var_14 = (unsigned short)56983;
signed char var_16 = (signed char)9;
unsigned char var_18 = (unsigned char)178;
unsigned short var_19 = (unsigned short)5289;
int zero = 0;
signed char var_20 = (signed char)16;
unsigned int var_21 = 2014481386U;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)61042;
unsigned int var_24 = 4167499021U;
short var_25 = (short)-7199;
long long int var_26 = 7452158480607531047LL;
unsigned short arr_0 [15] [15] ;
signed char arr_1 [15] [15] ;
_Bool arr_2 [15] [15] ;
_Bool arr_3 [15] [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45955;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)66;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
