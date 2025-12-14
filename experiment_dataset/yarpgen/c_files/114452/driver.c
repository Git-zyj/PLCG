#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1772506154261708193LL;
unsigned short var_9 = (unsigned short)61516;
unsigned long long int var_13 = 2103065218259864305ULL;
int zero = 0;
unsigned long long int var_19 = 10954423271094842882ULL;
unsigned char var_20 = (unsigned char)163;
unsigned int var_21 = 2555350635U;
short var_22 = (short)-9473;
unsigned short var_23 = (unsigned short)36493;
short var_24 = (short)9604;
unsigned int var_25 = 712444859U;
unsigned short var_26 = (unsigned short)47647;
unsigned short arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)34789;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
