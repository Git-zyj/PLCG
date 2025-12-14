#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)101;
unsigned long long int var_9 = 7044809626599594552ULL;
signed char var_11 = (signed char)19;
int zero = 0;
unsigned char var_18 = (unsigned char)88;
signed char var_19 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
