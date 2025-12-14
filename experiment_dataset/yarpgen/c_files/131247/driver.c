#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14451;
unsigned char var_2 = (unsigned char)229;
short var_3 = (short)21029;
short var_7 = (short)1497;
short var_9 = (short)32741;
int zero = 0;
unsigned char var_10 = (unsigned char)154;
short var_11 = (short)-19543;
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
