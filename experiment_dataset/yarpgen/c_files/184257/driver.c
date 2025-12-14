#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 197435184;
short var_2 = (short)-19713;
long long int var_3 = -8181157806888170798LL;
signed char var_4 = (signed char)46;
short var_7 = (short)14979;
signed char var_8 = (signed char)70;
long long int var_9 = 6181511627941394771LL;
unsigned short var_10 = (unsigned short)50312;
long long int var_11 = -2222842808389961128LL;
int zero = 0;
short var_15 = (short)-7293;
signed char var_16 = (signed char)106;
int var_17 = -1405992124;
signed char var_18 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
