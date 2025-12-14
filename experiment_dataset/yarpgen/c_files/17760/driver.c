#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned char var_3 = (unsigned char)15;
signed char var_4 = (signed char)34;
unsigned char var_16 = (unsigned char)52;
int zero = 0;
long long int var_17 = 1527889657773335001LL;
long long int var_18 = 2022056302604313408LL;
unsigned int var_19 = 3328883364U;
int var_20 = 1425148493;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
