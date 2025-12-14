#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)334;
short var_7 = (short)29348;
int var_9 = 1955784195;
unsigned short var_10 = (unsigned short)59290;
int zero = 0;
int var_16 = -764130243;
unsigned short var_17 = (unsigned short)58594;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
