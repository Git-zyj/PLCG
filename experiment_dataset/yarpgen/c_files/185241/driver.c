#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9146353373709574875ULL;
unsigned int var_8 = 3317913139U;
int var_18 = -527420137;
int zero = 0;
unsigned short var_20 = (unsigned short)22379;
int var_21 = -260638823;
short var_22 = (short)-4881;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
