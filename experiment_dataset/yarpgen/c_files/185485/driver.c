#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 446905069U;
unsigned int var_2 = 3698777983U;
long long int var_3 = 3942200348958216311LL;
signed char var_4 = (signed char)113;
_Bool var_10 = (_Bool)0;
int var_13 = -1964878623;
unsigned int var_16 = 2059781166U;
unsigned char var_17 = (unsigned char)243;
int zero = 0;
long long int var_20 = 7860396425812948447LL;
unsigned long long int var_21 = 1185849885325807593ULL;
unsigned int var_22 = 3603841259U;
unsigned char var_23 = (unsigned char)184;
int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
short arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -921255418;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9241663314676245746ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-30667;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
