#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-98;
short var_2 = (short)-31161;
short var_8 = (short)-13417;
short var_9 = (short)16367;
int zero = 0;
int var_11 = 167938950;
unsigned long long int var_12 = 4469284634544238877ULL;
short var_13 = (short)-13393;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
