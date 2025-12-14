#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = 7798791670786211014LL;
long long int var_16 = -135479643015387249LL;
int zero = 0;
short var_20 = (short)10336;
short var_21 = (short)-29881;
unsigned short var_22 = (unsigned short)39629;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
