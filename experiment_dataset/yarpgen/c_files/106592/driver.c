#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1139124145;
unsigned long long int var_1 = 783525547185622014ULL;
int var_3 = -271496423;
unsigned char var_6 = (unsigned char)197;
int zero = 0;
unsigned long long int var_12 = 6800500076663484414ULL;
unsigned long long int var_13 = 1859626248031755011ULL;
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
