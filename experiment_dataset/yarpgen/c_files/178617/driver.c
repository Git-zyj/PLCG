#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28997;
unsigned short var_5 = (unsigned short)46116;
signed char var_14 = (signed char)-47;
unsigned int var_17 = 573992581U;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
int var_21 = 1103688734;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 17351590023440070831ULL;
unsigned int var_24 = 1007831022U;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)30164;
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
