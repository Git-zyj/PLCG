#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3061800227U;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
unsigned long long int var_19 = 18256995834196610385ULL;
unsigned int var_20 = 4043658914U;
signed char var_21 = (signed char)-67;
unsigned int var_22 = 1048305832U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
