#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2307501463764750187ULL;
short var_5 = (short)-17993;
unsigned int var_8 = 3759123484U;
unsigned char var_10 = (unsigned char)161;
unsigned char var_11 = (unsigned char)37;
unsigned long long int var_16 = 4481606149325873820ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)198;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8241644692504195802LL;
unsigned int var_21 = 622472732U;
short arr_0 [19] [19] ;
signed char arr_1 [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-19870;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -6039775325651998782LL;
}

void checksum() {
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
