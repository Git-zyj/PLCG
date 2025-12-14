#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12486113220918536097ULL;
unsigned short var_7 = (unsigned short)18907;
short var_9 = (short)25902;
int zero = 0;
long long int var_10 = -8265318965353376946LL;
unsigned short var_11 = (unsigned short)21586;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
