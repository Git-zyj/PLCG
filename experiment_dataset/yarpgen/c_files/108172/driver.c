#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6894;
short var_6 = (short)24581;
unsigned int var_7 = 982818049U;
unsigned short var_12 = (unsigned short)29774;
short var_17 = (short)-22637;
int zero = 0;
short var_19 = (short)7118;
signed char var_20 = (signed char)117;
unsigned int var_21 = 1318712919U;
void init() {
}

void checksum() {
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
