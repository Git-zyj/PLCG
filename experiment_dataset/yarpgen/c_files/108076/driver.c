#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6162604175718264288LL;
unsigned char var_7 = (unsigned char)219;
int zero = 0;
short var_13 = (short)22583;
unsigned char var_14 = (unsigned char)110;
unsigned long long int var_15 = 7143040855604555763ULL;
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
