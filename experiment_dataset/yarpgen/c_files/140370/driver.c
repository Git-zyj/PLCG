#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
signed char var_8 = (signed char)116;
unsigned long long int var_11 = 6729401269813343097ULL;
int zero = 0;
short var_19 = (short)-7498;
long long int var_20 = -5415820551397216966LL;
unsigned char var_21 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
