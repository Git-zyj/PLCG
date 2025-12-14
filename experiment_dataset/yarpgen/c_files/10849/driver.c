#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1562485544;
unsigned int var_4 = 1842784879U;
unsigned char var_8 = (unsigned char)44;
unsigned char var_10 = (unsigned char)165;
unsigned short var_11 = (unsigned short)36033;
unsigned char var_13 = (unsigned char)230;
int zero = 0;
unsigned short var_15 = (unsigned short)51565;
signed char var_16 = (signed char)-115;
short var_17 = (short)-19580;
unsigned long long int var_18 = 2295112949901998867ULL;
short var_19 = (short)-29282;
unsigned char var_20 = (unsigned char)170;
signed char arr_3 [21] [21] [21] ;
long long int arr_5 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5110643980141890633LL : 2657256966446270282LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
