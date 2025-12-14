#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1549095072119973467LL;
int var_11 = 1075494039;
int zero = 0;
short var_12 = (short)-12452;
unsigned short var_13 = (unsigned short)25382;
unsigned short var_14 = (unsigned short)1926;
unsigned long long int var_15 = 4673054375141442613ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
