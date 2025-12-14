#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9385;
int var_3 = -637379083;
unsigned long long int var_4 = 2166140897865448345ULL;
int var_8 = 250796230;
unsigned char var_10 = (unsigned char)81;
int var_12 = 265990872;
int zero = 0;
short var_13 = (short)-2161;
int var_14 = 1152575426;
unsigned char var_15 = (unsigned char)162;
unsigned long long int var_16 = 17943543977419463856ULL;
unsigned int var_17 = 3876970571U;
unsigned char arr_2 [14] ;
unsigned int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 982674293U;
}

void checksum() {
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
