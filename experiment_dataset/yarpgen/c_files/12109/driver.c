#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned int var_2 = 3686877410U;
unsigned int var_3 = 2452992720U;
unsigned int var_7 = 2863008320U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2569654830U;
unsigned char var_10 = (unsigned char)143;
long long int var_12 = 894289901770717904LL;
signed char var_14 = (signed char)72;
int zero = 0;
short var_16 = (short)-22556;
unsigned char var_17 = (unsigned char)5;
short var_18 = (short)-13635;
unsigned long long int var_19 = 1539190811989961758ULL;
unsigned short var_20 = (unsigned short)17906;
unsigned short var_21 = (unsigned short)64741;
unsigned short arr_0 [15] [15] ;
short arr_1 [15] ;
unsigned int arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)6714;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-23107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3192545758U;
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
