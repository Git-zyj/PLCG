#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = -429172248;
_Bool var_6 = (_Bool)0;
int var_7 = -529248768;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)133;
unsigned int var_11 = 2830494415U;
int zero = 0;
int var_13 = 1525388253;
long long int var_14 = -5332208186909734830LL;
unsigned int var_15 = 1707818551U;
unsigned char var_16 = (unsigned char)87;
unsigned short var_17 = (unsigned short)45638;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)63036;
unsigned int var_20 = 4268617120U;
short var_21 = (short)-14365;
unsigned short arr_4 [15] [15] ;
unsigned short arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)60934;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)50620;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
