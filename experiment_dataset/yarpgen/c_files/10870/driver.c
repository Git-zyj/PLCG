#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_17 = (unsigned short)53665;
int zero = 0;
unsigned long long int var_19 = 14518498459583428836ULL;
signed char var_20 = (signed char)-70;
int var_21 = 1381277944;
short var_22 = (short)21703;
unsigned long long int var_23 = 100005823045314481ULL;
int var_24 = 1695072074;
unsigned char var_25 = (unsigned char)54;
signed char arr_1 [24] [24] ;
signed char arr_4 [24] [24] ;
unsigned short arr_5 [24] ;
short arr_8 [17] ;
unsigned int arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)54756;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)3802;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1897435390U : 1438420834U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
