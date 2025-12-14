#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)16904;
unsigned int var_17 = 25766493U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 112443638U;
int var_20 = 1916092102;
unsigned short var_21 = (unsigned short)57711;
unsigned long long int var_22 = 4327507930475800302ULL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-62;
unsigned char var_25 = (unsigned char)140;
unsigned short var_26 = (unsigned short)62493;
short arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-28704 : (short)-18541;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
