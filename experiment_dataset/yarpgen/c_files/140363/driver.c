#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -325938370;
unsigned short var_2 = (unsigned short)4967;
unsigned short var_6 = (unsigned short)15266;
int zero = 0;
long long int var_13 = 5552516081025208369LL;
unsigned short var_14 = (unsigned short)60497;
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
