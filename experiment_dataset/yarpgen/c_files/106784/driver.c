#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)15;
unsigned short var_8 = (unsigned short)63556;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 17135268151878389864ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)168;
unsigned long long int var_21 = 14041705048234466004ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)17763;
short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-17352;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
