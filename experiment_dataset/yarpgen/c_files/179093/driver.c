#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4372257715396252487LL;
unsigned long long int var_10 = 12593611280176261262ULL;
int zero = 0;
int var_17 = -1035970501;
unsigned long long int var_18 = 8103084821841739385ULL;
unsigned char var_19 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
