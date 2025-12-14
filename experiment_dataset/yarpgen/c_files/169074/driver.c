#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1092627505;
int var_3 = 1823073894;
_Bool var_4 = (_Bool)0;
int var_7 = 1008996069;
unsigned short var_12 = (unsigned short)10350;
unsigned int var_15 = 3259040152U;
int zero = 0;
unsigned short var_16 = (unsigned short)31355;
unsigned int var_17 = 834997469U;
unsigned char var_18 = (unsigned char)154;
unsigned char var_19 = (unsigned char)106;
unsigned short arr_2 [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)53184;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7631989805996955383ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)59;
}

void checksum() {
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
