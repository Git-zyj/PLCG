#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3597151126U;
long long int var_5 = 4048131022074882665LL;
unsigned char var_6 = (unsigned char)53;
unsigned long long int var_8 = 1511823572885409601ULL;
long long int var_12 = 3357614365482619935LL;
int zero = 0;
unsigned short var_13 = (unsigned short)6306;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)4755;
unsigned int var_16 = 2500699151U;
long long int var_17 = 2035422965448388945LL;
unsigned short arr_2 [25] ;
short arr_5 [25] [25] [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)32078;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-30543 : (short)22959;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)21 : (unsigned char)197;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
