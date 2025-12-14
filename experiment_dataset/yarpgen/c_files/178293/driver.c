#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27328;
unsigned long long int var_7 = 1534898839535637462ULL;
signed char var_11 = (signed char)100;
long long int var_12 = -9148777374123775535LL;
long long int var_15 = -6902151032233653987LL;
unsigned short var_16 = (unsigned short)687;
unsigned long long int var_18 = 11407321125733387257ULL;
unsigned short var_19 = (unsigned short)34269;
int zero = 0;
signed char var_20 = (signed char)-105;
unsigned short var_21 = (unsigned short)21469;
long long int var_22 = -7090991776685742353LL;
long long int var_23 = -6236611685212886850LL;
signed char arr_2 [24] ;
unsigned char arr_3 [24] ;
short arr_6 [24] [24] ;
unsigned short arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-23454 : (short)12328;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61542 : (unsigned short)35401;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
