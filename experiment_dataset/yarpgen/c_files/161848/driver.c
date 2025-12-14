#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6183477333083459924LL;
signed char var_5 = (signed char)99;
unsigned short var_8 = (unsigned short)48453;
int zero = 0;
unsigned long long int var_10 = 13520392542595353064ULL;
unsigned int var_11 = 701089012U;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1075637407149641506LL;
unsigned short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)21239 : (unsigned short)9820;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
