#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)21114;
short var_11 = (short)4521;
unsigned int var_15 = 967574373U;
int zero = 0;
unsigned char var_18 = (unsigned char)251;
signed char var_19 = (signed char)81;
unsigned long long int var_20 = 8408898166255399317ULL;
short var_21 = (short)12803;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-68;
signed char arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (signed char)-53;
}

void checksum() {
    hash(&seed, var_18);
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
