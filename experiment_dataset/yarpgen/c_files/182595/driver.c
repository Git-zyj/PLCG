#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4240744393715109773LL;
unsigned int var_6 = 1545103291U;
long long int var_7 = 2692406817421601005LL;
int zero = 0;
unsigned char var_10 = (unsigned char)209;
unsigned long long int var_11 = 16845027891005221959ULL;
unsigned char var_12 = (unsigned char)103;
unsigned char var_13 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
