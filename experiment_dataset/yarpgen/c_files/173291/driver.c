#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1490162217;
long long int var_4 = -1639984450085306162LL;
unsigned long long int var_9 = 8086942984493908142ULL;
int var_12 = -399337337;
unsigned char var_18 = (unsigned char)46;
int zero = 0;
unsigned int var_20 = 1749003825U;
unsigned long long int var_21 = 5451967067692092914ULL;
unsigned int var_22 = 2492384159U;
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
