#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned long long int var_1 = 8121507633971438688ULL;
unsigned long long int var_4 = 10311864220182246014ULL;
unsigned char var_5 = (unsigned char)197;
int zero = 0;
unsigned long long int var_12 = 12354637178845462745ULL;
long long int var_13 = -1472544443413790751LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
