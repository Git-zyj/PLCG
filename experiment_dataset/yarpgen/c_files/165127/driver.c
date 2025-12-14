#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2069827828U;
unsigned char var_2 = (unsigned char)246;
short var_4 = (short)-12010;
long long int var_5 = 8364184334848841486LL;
short var_6 = (short)-17673;
signed char var_10 = (signed char)116;
unsigned int var_11 = 1647875647U;
unsigned int var_12 = 1564555305U;
short var_16 = (short)10952;
int zero = 0;
short var_17 = (short)-15799;
short var_18 = (short)-11676;
short var_19 = (short)-2920;
unsigned char var_20 = (unsigned char)27;
unsigned int var_21 = 4042613052U;
unsigned char var_22 = (unsigned char)27;
unsigned char arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1821067716U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-22859;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
