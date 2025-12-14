#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20407;
unsigned short var_4 = (unsigned short)33454;
unsigned long long int var_5 = 13209479002584018758ULL;
unsigned long long int var_12 = 4782090377281553203ULL;
long long int var_13 = -9104172306626112161LL;
int zero = 0;
signed char var_15 = (signed char)1;
short var_16 = (short)-28409;
unsigned short var_17 = (unsigned short)50853;
signed char var_18 = (signed char)-45;
long long int var_19 = 1145661935678403799LL;
short var_20 = (short)24844;
unsigned short var_21 = (unsigned short)34377;
unsigned long long int var_22 = 8350297937646804551ULL;
unsigned int var_23 = 1998925295U;
_Bool var_24 = (_Bool)1;
short arr_1 [21] [21] ;
unsigned char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-3761 : (short)-21825;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)82;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
