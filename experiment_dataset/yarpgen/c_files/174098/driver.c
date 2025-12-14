#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20034;
signed char var_3 = (signed char)-10;
unsigned int var_8 = 3209484161U;
int zero = 0;
unsigned short var_13 = (unsigned short)5328;
int var_14 = -1160916943;
unsigned char var_15 = (unsigned char)84;
unsigned short var_16 = (unsigned short)6440;
unsigned long long int var_17 = 169983696471999244ULL;
int var_18 = 928279864;
unsigned short var_19 = (unsigned short)59873;
unsigned int var_20 = 3610485547U;
unsigned char var_21 = (unsigned char)81;
long long int arr_0 [24] [24] ;
signed char arr_2 [14] ;
unsigned char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -2384995796190399548LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)209;
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
