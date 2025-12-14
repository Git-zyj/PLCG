#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
unsigned long long int var_7 = 131957290073123193ULL;
short var_10 = (short)14305;
unsigned char var_12 = (unsigned char)93;
unsigned char var_14 = (unsigned char)179;
short var_18 = (short)23986;
int zero = 0;
unsigned int var_20 = 2699319169U;
unsigned short var_21 = (unsigned short)17011;
long long int var_22 = -483045691775240676LL;
unsigned short var_23 = (unsigned short)15088;
unsigned short var_24 = (unsigned short)1822;
signed char arr_0 [18] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-15961;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
