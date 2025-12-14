#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3442995768U;
unsigned int var_1 = 1756385554U;
signed char var_3 = (signed char)-39;
unsigned int var_6 = 932670257U;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)40;
unsigned short var_12 = (unsigned short)60911;
signed char var_13 = (signed char)-68;
short var_14 = (short)-24460;
short var_15 = (short)-7046;
short var_16 = (short)6494;
unsigned short arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)53375;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3563152653U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-1271 : (short)2544;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
