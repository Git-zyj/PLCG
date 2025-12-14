#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4383559206429672909LL;
long long int var_9 = -8847983003069070903LL;
short var_14 = (short)-21001;
int zero = 0;
short var_20 = (short)27940;
unsigned int var_21 = 2472194659U;
unsigned long long int var_22 = 17557416504504868939ULL;
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
