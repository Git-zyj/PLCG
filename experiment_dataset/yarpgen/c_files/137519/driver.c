#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1020219499U;
unsigned long long int var_15 = 15863733111502822952ULL;
int zero = 0;
long long int var_16 = 8155804324946867478LL;
unsigned short var_17 = (unsigned short)65028;
unsigned long long int var_18 = 8380261138873764023ULL;
short var_19 = (short)-21941;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
