#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29369;
unsigned char var_1 = (unsigned char)114;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-19351;
signed char var_10 = (signed char)15;
signed char var_11 = (signed char)-111;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)20865;
unsigned long long int var_16 = 6015368265080706990ULL;
unsigned int var_17 = 3757435753U;
short var_18 = (short)-25956;
int var_19 = 939467231;
short arr_0 [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)14634 : (short)-23998;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)233;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
