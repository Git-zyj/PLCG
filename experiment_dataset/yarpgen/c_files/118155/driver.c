#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -809955914;
int var_1 = 1740242236;
unsigned long long int var_3 = 9123018285206667690ULL;
long long int var_6 = -9087912864926824140LL;
unsigned int var_8 = 599193132U;
short var_9 = (short)-9308;
int zero = 0;
int var_10 = 898650727;
unsigned long long int var_11 = 12996844707636303209ULL;
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
