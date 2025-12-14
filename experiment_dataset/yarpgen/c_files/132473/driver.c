#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4953246345008549771ULL;
unsigned char var_2 = (unsigned char)165;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 17602454644662692938ULL;
long long int var_7 = -921987750024609202LL;
unsigned int var_9 = 342636380U;
long long int var_10 = 853471645670752123LL;
signed char var_13 = (signed char)-88;
unsigned int var_14 = 1908116955U;
unsigned char var_15 = (unsigned char)78;
unsigned int var_16 = 3183780650U;
int zero = 0;
signed char var_17 = (signed char)-69;
short var_18 = (short)27421;
signed char var_19 = (signed char)51;
unsigned int var_20 = 3957404556U;
unsigned int arr_1 [13] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1752796735U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
