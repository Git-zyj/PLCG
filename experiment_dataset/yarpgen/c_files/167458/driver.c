#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -268267955;
unsigned char var_6 = (unsigned char)6;
unsigned short var_7 = (unsigned short)43283;
long long int var_8 = 3400639039591584945LL;
int var_9 = -1837302075;
signed char var_11 = (signed char)-92;
unsigned long long int var_12 = 15855374276945917140ULL;
_Bool var_14 = (_Bool)0;
int var_15 = 1629347028;
int zero = 0;
unsigned short var_17 = (unsigned short)51124;
_Bool var_18 = (_Bool)1;
short var_19 = (short)18710;
unsigned short var_20 = (unsigned short)58716;
int var_21 = -1513415201;
unsigned int var_22 = 817075810U;
short var_23 = (short)15865;
signed char arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-13 : (signed char)-70;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
