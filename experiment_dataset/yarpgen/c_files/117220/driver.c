#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23678;
short var_3 = (short)12062;
long long int var_9 = -4359731956301771081LL;
short var_16 = (short)9716;
int zero = 0;
short var_20 = (short)-15209;
short var_21 = (short)5629;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
