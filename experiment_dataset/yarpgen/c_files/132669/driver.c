#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 135732000;
unsigned long long int var_3 = 4318849869978640429ULL;
long long int var_6 = -50571230943423401LL;
unsigned short var_14 = (unsigned short)27699;
unsigned int var_15 = 2524363128U;
int zero = 0;
short var_17 = (short)-6636;
long long int var_18 = -4505682514069438033LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
