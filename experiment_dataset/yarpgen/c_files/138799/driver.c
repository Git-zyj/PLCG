#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9858;
signed char var_3 = (signed char)-115;
unsigned int var_8 = 2410317923U;
short var_9 = (short)-28626;
long long int var_14 = 1487077580045416141LL;
int zero = 0;
int var_15 = 1417673878;
signed char var_16 = (signed char)-112;
unsigned char var_17 = (unsigned char)231;
short var_18 = (short)18424;
short var_19 = (short)-14625;
unsigned char var_20 = (unsigned char)45;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)20200;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
