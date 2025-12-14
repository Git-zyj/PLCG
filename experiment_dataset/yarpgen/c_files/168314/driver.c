#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_12 = -1635309574;
long long int var_16 = 4549704659005599133LL;
unsigned short var_18 = (unsigned short)18222;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1876040103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
