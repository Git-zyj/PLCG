#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2379840736655466440ULL;
int var_7 = 1017962537;
unsigned char var_16 = (unsigned char)191;
int zero = 0;
long long int var_18 = -8462793375016783322LL;
unsigned char var_19 = (unsigned char)96;
int var_20 = -1235568049;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
