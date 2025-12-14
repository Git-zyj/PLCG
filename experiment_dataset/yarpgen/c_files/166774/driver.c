#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7609936817915978911LL;
int var_5 = 271663812;
int var_7 = 1201274215;
unsigned char var_10 = (unsigned char)247;
int zero = 0;
unsigned long long int var_15 = 8049883136610307476ULL;
long long int var_16 = 5799121364506990056LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
