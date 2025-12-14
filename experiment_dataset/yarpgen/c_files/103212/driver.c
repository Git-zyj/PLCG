#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3577130186U;
unsigned char var_7 = (unsigned char)107;
short var_11 = (short)-18601;
_Bool var_13 = (_Bool)0;
long long int var_14 = 4794894087253323827LL;
long long int var_15 = -4644068577022210333LL;
int zero = 0;
unsigned char var_16 = (unsigned char)2;
short var_17 = (short)-16478;
long long int var_18 = 7836736279414918222LL;
int var_19 = 1149128221;
long long int var_20 = -4717565579581999143LL;
unsigned char arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)47;
}

void checksum() {
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
