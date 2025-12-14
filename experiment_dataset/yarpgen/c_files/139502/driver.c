#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4539279888552606137LL;
unsigned short var_9 = (unsigned short)32967;
unsigned int var_11 = 2984074866U;
int zero = 0;
unsigned short var_13 = (unsigned short)28045;
unsigned long long int var_14 = 16022268277782803103ULL;
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
