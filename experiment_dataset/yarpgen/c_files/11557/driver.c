#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
signed char var_2 = (signed char)-66;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-100;
long long int var_8 = 1168269867038785562LL;
unsigned short var_9 = (unsigned short)36396;
short var_10 = (short)28732;
int zero = 0;
long long int var_14 = 970027520688142327LL;
signed char var_15 = (signed char)126;
signed char var_16 = (signed char)94;
signed char var_17 = (signed char)78;
unsigned short var_18 = (unsigned short)35778;
short arr_1 [24] [24] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25463;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-4656;
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
