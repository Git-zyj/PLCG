#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18128845173828883512ULL;
int var_3 = 1740384249;
int var_6 = 1443424017;
int var_8 = -1742994367;
int zero = 0;
unsigned long long int var_10 = 14984992863034077398ULL;
unsigned long long int var_11 = 9772041393976973264ULL;
int var_12 = 81989806;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
