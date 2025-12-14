#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9734;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)19341;
unsigned long long int var_9 = 4590743470031937624ULL;
short var_11 = (short)1494;
short var_12 = (short)134;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3994697659U;
long long int var_15 = -7350324266163297476LL;
short var_16 = (short)-26569;
signed char arr_0 [15] ;
unsigned char arr_2 [15] ;
unsigned short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)4 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25450 : (unsigned short)37649;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
