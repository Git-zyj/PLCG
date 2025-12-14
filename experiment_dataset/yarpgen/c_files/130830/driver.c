#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2724859304U;
unsigned int var_6 = 2582557075U;
int zero = 0;
unsigned long long int var_12 = 8011423434511009791ULL;
unsigned long long int var_13 = 16382139611741328848ULL;
unsigned short var_14 = (unsigned short)18166;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
