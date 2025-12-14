#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 246483651817988396ULL;
short var_6 = (short)-12639;
short var_12 = (short)-29286;
int zero = 0;
unsigned long long int var_13 = 15411675929363784416ULL;
unsigned long long int var_14 = 1235345998350557626ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
