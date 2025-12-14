#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16322207786027514279ULL;
long long int var_6 = -8363972540400335113LL;
int zero = 0;
unsigned long long int var_11 = 6239603920477375949ULL;
unsigned long long int var_12 = 10634582560085203374ULL;
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
