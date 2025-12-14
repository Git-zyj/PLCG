#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2350086800U;
int var_5 = -1381268434;
unsigned long long int var_6 = 14556741650840854193ULL;
int zero = 0;
unsigned int var_10 = 3626569094U;
short var_11 = (short)-25467;
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
