#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned int var_5 = 1656801419U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-122;
signed char var_11 = (signed char)-31;
unsigned short var_13 = (unsigned short)5203;
signed char var_18 = (signed char)61;
int zero = 0;
int var_19 = 191426825;
int var_20 = 845508321;
signed char var_21 = (signed char)-116;
long long int var_22 = -4873254227253986865LL;
unsigned short var_23 = (unsigned short)17823;
unsigned int var_24 = 2410058818U;
unsigned int var_25 = 3443033139U;
unsigned short arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)38122 : (unsigned short)19861;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
