#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 13041413502444386468ULL;
signed char var_14 = (signed char)106;
unsigned char var_15 = (unsigned char)105;
unsigned char var_16 = (unsigned char)73;
int zero = 0;
unsigned long long int var_17 = 16880428130095047275ULL;
unsigned long long int var_18 = 16340636814371429783ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
