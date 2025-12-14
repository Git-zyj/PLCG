#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -658868018988798801LL;
unsigned long long int var_10 = 3840254100919871671ULL;
unsigned long long int var_12 = 15664964012899385392ULL;
unsigned short var_15 = (unsigned short)13409;
int zero = 0;
unsigned char var_17 = (unsigned char)196;
unsigned short var_18 = (unsigned short)13583;
long long int var_19 = -115977713925569925LL;
short var_20 = (short)25340;
unsigned long long int arr_0 [12] ;
unsigned short arr_2 [12] ;
unsigned short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14501946603912281072ULL : 3517029651030281322ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)16232;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)63801;
}

void checksum() {
    hash(&seed, var_17);
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
