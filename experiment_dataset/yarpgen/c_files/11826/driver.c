#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-43;
short var_3 = (short)-13683;
unsigned long long int var_5 = 18128518347750814038ULL;
int var_7 = -1930605223;
unsigned short var_9 = (unsigned short)17333;
int zero = 0;
int var_10 = -1247728642;
int var_11 = -925157025;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
