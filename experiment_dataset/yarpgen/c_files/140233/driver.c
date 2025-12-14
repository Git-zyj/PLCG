#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11600588459118807742ULL;
short var_4 = (short)9046;
_Bool var_5 = (_Bool)0;
int var_6 = -1962858689;
signed char var_11 = (signed char)-100;
short var_13 = (short)25;
int zero = 0;
signed char var_17 = (signed char)-99;
int var_18 = 1755874915;
unsigned short var_19 = (unsigned short)34119;
unsigned char var_20 = (unsigned char)56;
unsigned short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)58853;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
