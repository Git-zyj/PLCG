#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9878189599855702851ULL;
unsigned char var_7 = (unsigned char)21;
int zero = 0;
unsigned short var_15 = (unsigned short)27669;
unsigned long long int var_16 = 14394837425994301559ULL;
unsigned long long int var_17 = 2504220254006102058ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
