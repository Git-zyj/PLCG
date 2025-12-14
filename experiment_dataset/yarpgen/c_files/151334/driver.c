#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
long long int var_6 = -1808951926300158225LL;
int var_8 = 1002156532;
int zero = 0;
unsigned long long int var_16 = 8464632176936838795ULL;
short var_17 = (short)15554;
long long int var_18 = 2871923519221667594LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
