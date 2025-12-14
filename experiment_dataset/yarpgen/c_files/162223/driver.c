#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1291268049285951283LL;
unsigned long long int var_1 = 16666682856048957652ULL;
int var_2 = -1024806925;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)5631;
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
