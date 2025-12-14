#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned char var_5 = (unsigned char)9;
int var_11 = 112621719;
int zero = 0;
int var_13 = -1661262843;
unsigned long long int var_14 = 3548638098626029250ULL;
unsigned int var_15 = 1983101654U;
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
