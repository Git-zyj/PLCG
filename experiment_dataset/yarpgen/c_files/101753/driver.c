#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
signed char var_4 = (signed char)67;
signed char var_6 = (signed char)-91;
signed char var_9 = (signed char)47;
unsigned short var_10 = (unsigned short)31731;
int var_13 = 1796317813;
int zero = 0;
unsigned short var_14 = (unsigned short)37534;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-28556;
short var_17 = (short)18828;
unsigned long long int var_18 = 10098401237312602891ULL;
_Bool arr_0 [24] ;
short arr_1 [24] ;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)30895;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -437946879;
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
