#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 156633018U;
long long int var_3 = 993974602095012733LL;
unsigned long long int var_7 = 6254121195198954345ULL;
int zero = 0;
unsigned long long int var_10 = 6436045145666373296ULL;
unsigned int var_11 = 3466990444U;
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
