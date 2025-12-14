#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2466405034U;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_17 = (unsigned char)223;
int zero = 0;
unsigned long long int var_20 = 11944677765920431463ULL;
signed char var_21 = (signed char)-114;
unsigned long long int var_22 = 5149317515680997415ULL;
unsigned int var_23 = 113244868U;
long long int var_24 = 5365090170627539267LL;
short arr_0 [10] ;
unsigned char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-20953 : (short)-26528;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)116 : (unsigned char)119;
}

void checksum() {
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
