#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)18;
unsigned char var_7 = (unsigned char)184;
signed char var_9 = (signed char)-113;
int var_12 = -562744372;
unsigned int var_13 = 3001496524U;
int zero = 0;
unsigned short var_15 = (unsigned short)40955;
int var_16 = 300083580;
unsigned char var_17 = (unsigned char)4;
short var_18 = (short)-9008;
_Bool var_19 = (_Bool)1;
unsigned short arr_0 [11] ;
unsigned int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)49941;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1720182631U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
