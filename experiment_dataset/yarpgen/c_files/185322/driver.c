#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_5 = (signed char)37;
int var_8 = 166854805;
short var_9 = (short)31678;
int zero = 0;
long long int var_10 = 5769821728246866111LL;
_Bool var_11 = (_Bool)0;
int var_12 = -967083861;
unsigned short var_13 = (unsigned short)23161;
int var_14 = -1270292550;
unsigned char var_15 = (unsigned char)160;
signed char var_16 = (signed char)-64;
signed char var_17 = (signed char)-30;
unsigned short var_18 = (unsigned short)44010;
_Bool arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
unsigned short arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)3727;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
