#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12217;
unsigned long long int var_1 = 9706403771385282351ULL;
int var_12 = -211497869;
unsigned short var_13 = (unsigned short)16961;
int zero = 0;
short var_20 = (short)-9215;
unsigned int var_21 = 3634882672U;
void init() {
}

void checksum() {
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
