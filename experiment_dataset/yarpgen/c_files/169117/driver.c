#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
int var_3 = 2131096740;
unsigned short var_8 = (unsigned short)6154;
_Bool var_9 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_18 = 8356587333268120639LL;
unsigned int var_19 = 3351441769U;
unsigned char var_20 = (unsigned char)122;
unsigned char arr_3 [20] [20] [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 12071625175671823013ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
