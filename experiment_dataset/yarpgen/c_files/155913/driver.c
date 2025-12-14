#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 878107261;
unsigned int var_7 = 1719239770U;
signed char var_11 = (signed char)98;
int zero = 0;
signed char var_14 = (signed char)27;
unsigned char var_15 = (unsigned char)215;
int var_16 = 1105602982;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
