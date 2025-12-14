#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
short var_2 = (short)-18843;
unsigned int var_7 = 2831882127U;
short var_10 = (short)20663;
short var_14 = (short)12816;
unsigned char var_15 = (unsigned char)21;
int zero = 0;
unsigned long long int var_17 = 1755400177490908182ULL;
unsigned char var_18 = (unsigned char)126;
unsigned int var_19 = 594826973U;
unsigned long long int var_20 = 17216339729249535150ULL;
long long int var_21 = 2555733591882868948LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
