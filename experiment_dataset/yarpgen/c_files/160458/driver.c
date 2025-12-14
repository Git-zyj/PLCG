#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned short var_2 = (unsigned short)30075;
unsigned int var_3 = 3052874767U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1256808047U;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-11635;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 315961814U;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8121407639885946101LL;
unsigned long long int var_20 = 16406006427640289120ULL;
unsigned int arr_4 [16] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 2856533317U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)16 : (signed char)20;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
