#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -809335119;
long long int var_8 = -2526824120509979852LL;
unsigned int var_13 = 1871102082U;
int zero = 0;
unsigned int var_14 = 1159550571U;
unsigned long long int var_15 = 12291685120372505511ULL;
unsigned long long int var_16 = 1331159323222665388ULL;
unsigned short var_17 = (unsigned short)18091;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
