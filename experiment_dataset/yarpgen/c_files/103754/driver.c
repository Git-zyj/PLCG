#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-1507;
short var_10 = (short)24587;
int var_18 = 806494619;
short var_19 = (short)-28350;
int zero = 0;
short var_20 = (short)-29764;
short var_21 = (short)-21845;
unsigned long long int var_22 = 14589419968003843398ULL;
short var_23 = (short)6017;
unsigned int var_24 = 1390174841U;
void init() {
}

void checksum() {
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
