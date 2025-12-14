#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)37;
unsigned char var_6 = (unsigned char)219;
long long int var_7 = -7611415467268773022LL;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 930132598U;
_Bool var_14 = (_Bool)1;
unsigned short var_18 = (unsigned short)42361;
int zero = 0;
signed char var_19 = (signed char)-23;
short var_20 = (short)4655;
signed char var_21 = (signed char)60;
unsigned char var_22 = (unsigned char)122;
signed char var_23 = (signed char)100;
short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-27651;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
