#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 1751278020402853780LL;
unsigned short var_15 = (unsigned short)37963;
unsigned long long int var_16 = 12588983333770909989ULL;
unsigned char var_17 = (unsigned char)226;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
unsigned short var_21 = (unsigned short)32050;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
