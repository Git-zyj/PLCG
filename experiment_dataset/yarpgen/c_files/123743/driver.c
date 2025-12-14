#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7487545713477882467LL;
long long int var_1 = 3505346491426199171LL;
unsigned short var_5 = (unsigned short)43013;
signed char var_6 = (signed char)-56;
signed char var_10 = (signed char)7;
int var_11 = -342600016;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1397486099U;
unsigned char var_18 = (unsigned char)212;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short arr_1 [22] ;
_Bool arr_2 [22] [22] ;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)2411;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)11887;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
