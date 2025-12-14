#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1553433679503539041LL;
unsigned long long int var_19 = 14027615520093192835ULL;
int zero = 0;
unsigned long long int var_20 = 11526875154351196316ULL;
long long int var_21 = 6189855093982978792LL;
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
