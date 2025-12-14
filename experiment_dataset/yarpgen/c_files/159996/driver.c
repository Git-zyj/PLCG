#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39132;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)56393;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 1270622588874869190ULL;
unsigned int var_12 = 2662614296U;
unsigned short var_13 = (unsigned short)48443;
int zero = 0;
unsigned char var_18 = (unsigned char)241;
signed char var_19 = (signed char)-17;
unsigned int var_20 = 4112431614U;
short var_21 = (short)-26947;
unsigned int arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1681562226U;
}

void checksum() {
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
