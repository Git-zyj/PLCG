#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25708;
short var_8 = (short)-21443;
short var_9 = (short)-3598;
short var_11 = (short)27343;
short var_15 = (short)-22254;
short var_16 = (short)20883;
int zero = 0;
short var_17 = (short)16737;
short var_18 = (short)-27258;
short var_19 = (short)-29602;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
