#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31651;
short var_6 = (short)-21974;
unsigned short var_10 = (unsigned short)64641;
short var_11 = (short)-18598;
short var_17 = (short)-18617;
int zero = 0;
signed char var_18 = (signed char)72;
short var_19 = (short)32669;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
