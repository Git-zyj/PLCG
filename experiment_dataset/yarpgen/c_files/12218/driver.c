#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8841438517609054355LL;
long long int var_3 = 7493391950879731012LL;
long long int var_8 = 2921517865977631908LL;
int zero = 0;
long long int var_20 = -1672374490856823498LL;
long long int var_21 = -7735280322570757568LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
