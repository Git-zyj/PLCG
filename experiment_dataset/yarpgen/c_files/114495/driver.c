#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3371248545839502448LL;
unsigned short var_6 = (unsigned short)25879;
int zero = 0;
int var_20 = -1940922613;
unsigned short var_21 = (unsigned short)46889;
unsigned short var_22 = (unsigned short)7642;
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
