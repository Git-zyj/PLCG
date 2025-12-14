#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)32;
unsigned char var_6 = (unsigned char)34;
unsigned long long int var_9 = 5099163546634693588ULL;
signed char var_11 = (signed char)28;
int zero = 0;
unsigned int var_15 = 561485718U;
signed char var_16 = (signed char)53;
void init() {
}

void checksum() {
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
