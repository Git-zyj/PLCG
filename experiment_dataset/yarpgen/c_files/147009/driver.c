#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32198;
short var_4 = (short)-27873;
short var_9 = (short)25832;
short var_13 = (short)4027;
int zero = 0;
short var_17 = (short)-16607;
short var_18 = (short)5003;
short var_19 = (short)-1625;
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
