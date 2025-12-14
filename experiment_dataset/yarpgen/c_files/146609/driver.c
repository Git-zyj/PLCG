#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -60385746148798232LL;
int var_10 = 1780147067;
int var_13 = -313746565;
int var_15 = 556961714;
int zero = 0;
long long int var_20 = 6883727480168128421LL;
int var_21 = 872761712;
unsigned int var_22 = 3049942608U;
short var_23 = (short)16735;
short var_24 = (short)-11713;
int var_25 = 1747379249;
int var_26 = 975332977;
signed char var_27 = (signed char)84;
signed char arr_0 [16] ;
int arr_2 [16] [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1494622455;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1895962717;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
