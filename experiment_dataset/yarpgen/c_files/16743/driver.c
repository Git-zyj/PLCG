#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
long long int var_6 = -4317279118691857888LL;
long long int var_8 = -3289447925649505511LL;
long long int var_10 = -7355598093150408165LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 8535560203885648795ULL;
unsigned int var_19 = 3333465676U;
unsigned short var_20 = (unsigned short)53160;
signed char var_21 = (signed char)6;
unsigned short arr_0 [25] ;
long long int arr_2 [25] [25] [25] ;
unsigned int arr_4 [25] ;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)19509;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -7605849884998126165LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 613706588U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21530 : (unsigned short)28120;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
