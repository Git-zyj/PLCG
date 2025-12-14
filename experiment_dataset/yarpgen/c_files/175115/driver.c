#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 577883491585666674ULL;
short var_2 = (short)23605;
unsigned short var_3 = (unsigned short)56392;
signed char var_4 = (signed char)118;
short var_5 = (short)-16787;
_Bool var_6 = (_Bool)0;
long long int var_7 = 6178562678800629310LL;
short var_9 = (short)-24656;
unsigned int var_11 = 2124377085U;
int zero = 0;
int var_12 = 510788919;
unsigned int var_13 = 2573135835U;
int var_14 = -1859958936;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10252134483182878318ULL;
int var_17 = -935210890;
long long int arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5174849657006258547LL;
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
