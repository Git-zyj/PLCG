#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4571442332924647286ULL;
unsigned long long int var_6 = 1179552658420212133ULL;
unsigned char var_9 = (unsigned char)45;
signed char var_10 = (signed char)-115;
int zero = 0;
signed char var_14 = (signed char)83;
signed char var_15 = (signed char)-101;
unsigned char var_16 = (unsigned char)146;
signed char var_17 = (signed char)20;
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
