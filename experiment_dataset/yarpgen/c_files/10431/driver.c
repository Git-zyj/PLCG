#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4411510709665109773LL;
unsigned short var_7 = (unsigned short)41867;
long long int var_8 = -7949027901320776628LL;
short var_12 = (short)-32433;
int zero = 0;
unsigned long long int var_14 = 14101937512810124161ULL;
unsigned short var_15 = (unsigned short)56552;
void init() {
}

void checksum() {
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
