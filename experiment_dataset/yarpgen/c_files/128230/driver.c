#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10622;
unsigned long long int var_3 = 6037703662773927266ULL;
unsigned char var_5 = (unsigned char)85;
short var_10 = (short)-11461;
int zero = 0;
unsigned char var_13 = (unsigned char)72;
unsigned char var_14 = (unsigned char)189;
int var_15 = 891455275;
short var_16 = (short)18777;
unsigned char var_17 = (unsigned char)246;
unsigned char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
