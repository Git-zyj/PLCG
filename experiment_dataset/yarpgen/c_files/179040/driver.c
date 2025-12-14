#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18223228705993697277ULL;
int var_3 = -1416039107;
int var_8 = 762969060;
unsigned long long int var_9 = 10293135458252914142ULL;
int var_13 = 819186962;
int zero = 0;
int var_19 = 2012086289;
short var_20 = (short)-11629;
void init() {
}

void checksum() {
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
