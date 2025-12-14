#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10172;
unsigned long long int var_11 = 16730618680986078645ULL;
long long int var_15 = -4111101817429637351LL;
int zero = 0;
unsigned long long int var_20 = 16296396711533002032ULL;
unsigned short var_21 = (unsigned short)25158;
short var_22 = (short)-4301;
unsigned long long int var_23 = 9189368842995111222ULL;
int var_24 = 1966950155;
signed char var_25 = (signed char)7;
int var_26 = -1612197208;
unsigned int arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 359768020U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1794372504;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 17838586837874759682ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
