#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3532338584U;
unsigned short var_3 = (unsigned short)1788;
unsigned char var_5 = (unsigned char)69;
unsigned long long int var_6 = 11833138697813546292ULL;
unsigned char var_8 = (unsigned char)89;
_Bool var_11 = (_Bool)1;
int var_12 = 1994413791;
int zero = 0;
unsigned long long int var_13 = 8600258273037167225ULL;
signed char var_14 = (signed char)111;
short var_15 = (short)-32338;
unsigned long long int var_16 = 8084278581691299035ULL;
signed char arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)20;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
