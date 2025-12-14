#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
_Bool var_3 = (_Bool)1;
long long int var_4 = 2192996758142250921LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)194;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)36973;
int zero = 0;
unsigned int var_10 = 793945036U;
unsigned short var_11 = (unsigned short)11267;
unsigned long long int var_12 = 17742246604681073953ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 146308555U;
unsigned char var_15 = (unsigned char)109;
unsigned char var_16 = (unsigned char)66;
unsigned long long int var_17 = 12943311900924655879ULL;
long long int var_18 = -6987325445387610434LL;
_Bool arr_21 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
