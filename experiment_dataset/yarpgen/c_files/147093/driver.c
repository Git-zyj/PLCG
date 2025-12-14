#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
unsigned long long int var_10 = 15021287895018708548ULL;
unsigned int var_15 = 1803809866U;
int zero = 0;
unsigned long long int var_16 = 12027979375331807715ULL;
long long int var_17 = -7748562195797324674LL;
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
