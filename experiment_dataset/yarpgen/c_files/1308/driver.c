#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 16287613623219844789ULL;
unsigned char var_11 = (unsigned char)20;
signed char var_12 = (signed char)-18;
unsigned int var_13 = 4197736879U;
short var_14 = (short)-4154;
long long int var_16 = 8967821034635763684LL;
int zero = 0;
short var_19 = (short)-4697;
signed char var_20 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
