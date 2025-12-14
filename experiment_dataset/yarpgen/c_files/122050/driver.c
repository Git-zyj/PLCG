#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned long long int var_7 = 11288747222814611652ULL;
signed char var_9 = (signed char)-62;
int zero = 0;
short var_11 = (short)27281;
unsigned char var_12 = (unsigned char)130;
unsigned char var_13 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
