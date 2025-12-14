#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48604;
unsigned short var_2 = (unsigned short)23367;
long long int var_7 = -1586042119368540669LL;
unsigned short var_9 = (unsigned short)19835;
int zero = 0;
long long int var_13 = 9202376368832327070LL;
unsigned short var_14 = (unsigned short)36670;
unsigned long long int var_15 = 5793820162662722739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
