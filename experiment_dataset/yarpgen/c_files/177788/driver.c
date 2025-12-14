#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16003;
signed char var_1 = (signed char)3;
unsigned short var_2 = (unsigned short)53854;
int zero = 0;
unsigned long long int var_10 = 16325274238617774873ULL;
signed char var_11 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
