#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
signed char var_1 = (signed char)83;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-20346;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 18257706754543634622ULL;
unsigned int var_10 = 4263870874U;
short var_11 = (short)7528;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
long long int var_14 = -4077559608820262832LL;
unsigned int var_15 = 158074103U;
short var_16 = (short)-26590;
short arr_0 [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-10608;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26930 : (unsigned short)61927;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
