#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-9;
unsigned int var_4 = 1435384528U;
signed char var_5 = (signed char)120;
signed char var_6 = (signed char)66;
short var_8 = (short)-6504;
unsigned int var_12 = 2093705360U;
long long int var_15 = -5483798772896872301LL;
long long int var_16 = 5899824302663271237LL;
int zero = 0;
unsigned int var_20 = 900894912U;
unsigned char var_21 = (unsigned char)180;
unsigned int var_22 = 2667735568U;
int var_23 = -1656586644;
int var_24 = 672229707;
int var_25 = -2038339767;
_Bool arr_1 [14] ;
_Bool arr_2 [14] [14] [14] ;
short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)16268;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
