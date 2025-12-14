#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17673;
unsigned short var_4 = (unsigned short)18808;
long long int var_6 = 6062605641820042587LL;
unsigned long long int var_7 = 17934288047167173929ULL;
unsigned int var_8 = 547969956U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)31;
unsigned long long int var_13 = 15304808222090150807ULL;
signed char var_14 = (signed char)50;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)217;
unsigned int var_20 = 1618291438U;
unsigned int var_21 = 1053931291U;
signed char var_22 = (signed char)-45;
int var_23 = 895019354;
unsigned char var_24 = (unsigned char)221;
int arr_3 [15] [15] [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -978549361;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -6514780530892446148LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
