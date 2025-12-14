#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13273940115399519889ULL;
unsigned char var_7 = (unsigned char)84;
short var_8 = (short)-21625;
unsigned int var_9 = 3235986855U;
int zero = 0;
unsigned int var_10 = 4244485164U;
signed char var_11 = (signed char)76;
long long int var_12 = 9177632008751126019LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
