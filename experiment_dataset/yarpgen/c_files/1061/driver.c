#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58794;
unsigned char var_1 = (unsigned char)222;
short var_2 = (short)20814;
long long int var_7 = -9184622242243418688LL;
long long int var_8 = -7650402864285067116LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)126;
short var_14 = (short)-18127;
int zero = 0;
int var_16 = -434305532;
short var_17 = (short)-15040;
unsigned short var_18 = (unsigned short)38618;
unsigned char var_19 = (unsigned char)84;
unsigned char var_20 = (unsigned char)17;
unsigned char arr_0 [18] [18] ;
_Bool arr_1 [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)30142 : (short)32186;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
