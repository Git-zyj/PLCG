#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 42392380219173072ULL;
unsigned int var_1 = 1607636371U;
unsigned int var_2 = 360235474U;
short var_8 = (short)26275;
int zero = 0;
long long int var_13 = -3933992139754137404LL;
short var_14 = (short)23078;
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
