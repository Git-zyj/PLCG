#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)35;
unsigned char var_3 = (unsigned char)208;
signed char var_4 = (signed char)-88;
unsigned char var_6 = (unsigned char)223;
signed char var_10 = (signed char)-57;
_Bool var_11 = (_Bool)0;
short var_12 = (short)23040;
signed char var_13 = (signed char)33;
signed char var_14 = (signed char)-31;
int zero = 0;
signed char var_17 = (signed char)6;
long long int var_18 = 9173320317160320253LL;
unsigned int var_19 = 4281675673U;
unsigned char var_20 = (unsigned char)32;
signed char var_21 = (signed char)70;
short var_22 = (short)-23583;
long long int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -1622830138585769091LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
