#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1591196068209609000LL;
long long int var_1 = -6624372872162768432LL;
int var_4 = 2060983676;
unsigned long long int var_6 = 10080852484148992623ULL;
int var_8 = -972193415;
long long int var_9 = -5612921523029079557LL;
int zero = 0;
signed char var_11 = (signed char)33;
long long int var_12 = -884278458792219231LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
