#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17438;
short var_5 = (short)-28911;
unsigned long long int var_6 = 12029216597033670355ULL;
short var_10 = (short)-4056;
unsigned char var_12 = (unsigned char)91;
int zero = 0;
unsigned long long int var_14 = 11275112950235572212ULL;
unsigned long long int var_15 = 4400073987553654583ULL;
unsigned short var_16 = (unsigned short)36122;
unsigned int var_17 = 3719883417U;
_Bool var_18 = (_Bool)0;
_Bool arr_0 [17] ;
short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-31129;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
