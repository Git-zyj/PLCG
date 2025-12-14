#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26626;
unsigned short var_2 = (unsigned short)5797;
unsigned short var_4 = (unsigned short)43733;
unsigned short var_5 = (unsigned short)50452;
signed char var_15 = (signed char)23;
int zero = 0;
unsigned int var_19 = 611796498U;
short var_20 = (short)-10899;
unsigned int var_21 = 1719286970U;
signed char var_22 = (signed char)-39;
short arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-13896;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
