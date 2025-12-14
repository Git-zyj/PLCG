#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-30827;
unsigned long long int var_10 = 17308799915291681594ULL;
int zero = 0;
unsigned long long int var_20 = 13068955749856194134ULL;
unsigned long long int var_21 = 4616498433632704851ULL;
short var_22 = (short)-2041;
void init() {
}

void checksum() {
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
