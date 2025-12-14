#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 18001176195343829380ULL;
unsigned long long int var_9 = 10257780976308625825ULL;
unsigned long long int var_13 = 16279085942972051245ULL;
int zero = 0;
signed char var_14 = (signed char)-118;
unsigned long long int var_15 = 5800106627852544114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
