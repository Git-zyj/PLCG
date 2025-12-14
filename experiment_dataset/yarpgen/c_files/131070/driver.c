#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)19;
int var_10 = 1067344164;
signed char var_12 = (signed char)61;
unsigned short var_17 = (unsigned short)19014;
int zero = 0;
unsigned short var_20 = (unsigned short)51693;
int var_21 = 1575632425;
int var_22 = -215377956;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
