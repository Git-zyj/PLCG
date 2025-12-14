#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
short var_3 = (short)-17532;
long long int var_7 = 5146998459873914074LL;
short var_9 = (short)28456;
int zero = 0;
unsigned long long int var_12 = 3053800575153804413ULL;
int var_13 = -98123120;
int var_14 = 69046225;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
