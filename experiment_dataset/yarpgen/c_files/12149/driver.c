#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18228019338040123444ULL;
unsigned char var_6 = (unsigned char)76;
unsigned char var_11 = (unsigned char)153;
int zero = 0;
int var_12 = -1904728694;
unsigned int var_13 = 464161023U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
