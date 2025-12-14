#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3648143221357146208LL;
int var_9 = -1737200329;
long long int var_11 = -5652156559665002823LL;
long long int var_15 = 8047585740874289450LL;
int zero = 0;
long long int var_16 = -1362732082171359250LL;
short var_17 = (short)-15743;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
