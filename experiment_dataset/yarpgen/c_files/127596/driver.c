#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14499460988911992683ULL;
short var_1 = (short)4857;
unsigned char var_2 = (unsigned char)179;
short var_3 = (short)10713;
int var_4 = -1053139394;
unsigned long long int var_5 = 4924800556175364452ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)59591;
long long int var_9 = 8705822074160843599LL;
unsigned int var_10 = 2459606122U;
int zero = 0;
int var_12 = 1048904682;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-26331;
unsigned char var_15 = (unsigned char)46;
signed char var_16 = (signed char)61;
unsigned short var_17 = (unsigned short)53607;
unsigned int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1047241458U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
