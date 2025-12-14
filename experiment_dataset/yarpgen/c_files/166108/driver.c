#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2029002400;
int var_1 = -1388444891;
signed char var_4 = (signed char)68;
int var_7 = -370475462;
unsigned long long int var_9 = 15251158456095781982ULL;
_Bool var_10 = (_Bool)1;
int var_11 = -1424986498;
short var_12 = (short)-4767;
int zero = 0;
short var_13 = (short)-10872;
signed char var_14 = (signed char)59;
short var_15 = (short)-11238;
long long int arr_5 [23] [23] ;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -6254129468087540140LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 3990644617142355886LL : -7675792573199454766LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
