#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 842493428;
short var_4 = (short)-26727;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)118;
int zero = 0;
unsigned char var_16 = (unsigned char)191;
unsigned long long int var_17 = 4344319592922341026ULL;
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
