#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
unsigned int var_7 = 3074199460U;
int var_8 = 1583323008;
unsigned int var_9 = 3501178643U;
int var_14 = 1030418718;
int zero = 0;
unsigned int var_16 = 3680595298U;
unsigned int var_17 = 2579563158U;
void init() {
}

void checksum() {
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
