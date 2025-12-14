#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13831043468549388237ULL;
int var_1 = -1677129724;
int var_4 = -1586334628;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)129;
unsigned short var_9 = (unsigned short)43396;
signed char var_12 = (signed char)-34;
int zero = 0;
int var_15 = 1169797536;
unsigned long long int var_16 = 9262412429667491920ULL;
short var_17 = (short)-13031;
signed char var_18 = (signed char)-115;
int var_19 = -883269317;
short arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-21078;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
