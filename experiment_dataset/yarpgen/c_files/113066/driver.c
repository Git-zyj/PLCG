#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30604;
int var_12 = 214347699;
long long int var_13 = -8484054461428806470LL;
unsigned short var_14 = (unsigned short)5439;
unsigned short var_17 = (unsigned short)24308;
int zero = 0;
int var_18 = -1575794800;
unsigned short var_19 = (unsigned short)40791;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
