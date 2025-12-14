#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34611;
int var_2 = -1098300771;
unsigned int var_3 = 3368010720U;
unsigned char var_5 = (unsigned char)180;
unsigned long long int var_6 = 14519625521294410925ULL;
unsigned char var_7 = (unsigned char)0;
int var_8 = 2053057129;
unsigned long long int var_11 = 17648422018648521945ULL;
int zero = 0;
long long int var_13 = -5998931248809907805LL;
unsigned long long int var_14 = 16224075897479861032ULL;
unsigned int var_15 = 2024177579U;
short var_16 = (short)29406;
signed char var_17 = (signed char)44;
signed char var_18 = (signed char)-95;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1963512330U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3076251827U;
}

void checksum() {
    hash(&seed, var_13);
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
