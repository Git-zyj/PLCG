#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)19912;
long long int var_10 = 6523195141660755884LL;
long long int var_12 = 3232740382651138869LL;
short var_13 = (short)17638;
int zero = 0;
short var_15 = (short)-23246;
short var_16 = (short)12727;
void init() {
}

void checksum() {
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
