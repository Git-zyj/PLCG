#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)127;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)35;
unsigned long long int var_9 = 17691344011397366383ULL;
int var_10 = -2061924178;
signed char var_11 = (signed char)-9;
unsigned int var_12 = 1169703887U;
unsigned int var_13 = 3832295734U;
int zero = 0;
unsigned short var_16 = (unsigned short)16494;
unsigned int var_17 = 3682023641U;
signed char var_18 = (signed char)45;
int arr_0 [20] ;
int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 377095024;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9081108;
}

void checksum() {
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
