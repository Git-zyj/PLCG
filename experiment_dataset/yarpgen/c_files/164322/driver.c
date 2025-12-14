#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 17465783110463041637ULL;
short var_12 = (short)-20256;
int zero = 0;
unsigned long long int var_14 = 568158793968390938ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
