#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13242;
unsigned int var_5 = 698096875U;
short var_6 = (short)-6528;
short var_7 = (short)18389;
int zero = 0;
unsigned long long int var_16 = 8928727473135077393ULL;
short var_17 = (short)-15460;
unsigned short var_18 = (unsigned short)42741;
int var_19 = 1300280783;
unsigned int var_20 = 914885902U;
unsigned long long int var_21 = 1751468079463355849ULL;
short var_22 = (short)12990;
int var_23 = 583741458;
short arr_1 [17] ;
short arr_3 [17] [17] [17] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)27323;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-12858;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 6787448093675402576ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
