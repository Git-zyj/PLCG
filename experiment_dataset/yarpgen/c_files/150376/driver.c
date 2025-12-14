#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = 1881231728;
long long int var_5 = 5897097234597632874LL;
short var_6 = (short)15556;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 277936494U;
unsigned char var_13 = (unsigned char)123;
int zero = 0;
unsigned short var_18 = (unsigned short)27062;
short var_19 = (short)-15466;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool arr_0 [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)76;
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
