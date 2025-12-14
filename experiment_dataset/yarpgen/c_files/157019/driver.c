#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = -7438201535052169196LL;
int zero = 0;
unsigned long long int var_20 = 7580743956016156113ULL;
long long int var_21 = -8598632938342048341LL;
unsigned char var_22 = (unsigned char)219;
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
