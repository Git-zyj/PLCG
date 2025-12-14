#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
unsigned char var_4 = (unsigned char)19;
long long int var_8 = -6125799700817394266LL;
int zero = 0;
unsigned long long int var_13 = 2190116148608561023ULL;
short var_14 = (short)24025;
unsigned short var_15 = (unsigned short)61437;
unsigned long long int var_16 = 18167223246761956442ULL;
short var_17 = (short)-15304;
unsigned long long int var_18 = 15736397568207564379ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)30;
unsigned char var_21 = (unsigned char)114;
unsigned int arr_1 [12] ;
short arr_3 [12] [12] ;
unsigned long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2959170592U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 8456223377901135321ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
