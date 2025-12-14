#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61479;
unsigned short var_6 = (unsigned short)21596;
signed char var_13 = (signed char)64;
int zero = 0;
unsigned long long int var_15 = 6301154895873258818ULL;
signed char var_16 = (signed char)-102;
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
