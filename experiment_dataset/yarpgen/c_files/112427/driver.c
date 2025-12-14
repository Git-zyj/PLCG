#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -684503808;
unsigned char var_4 = (unsigned char)139;
long long int var_9 = 3833459719561764771LL;
int zero = 0;
int var_18 = -1434577525;
long long int var_19 = 652985100923322365LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
