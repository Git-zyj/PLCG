#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62524;
int var_2 = 960023617;
unsigned long long int var_4 = 8068078913541105334ULL;
short var_8 = (short)-28181;
int zero = 0;
unsigned short var_14 = (unsigned short)27081;
unsigned short var_15 = (unsigned short)37746;
short var_16 = (short)-746;
unsigned long long int var_17 = 4788569258512848990ULL;
_Bool var_18 = (_Bool)0;
short arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-18538;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
