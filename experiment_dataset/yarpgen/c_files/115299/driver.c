#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3930460011U;
unsigned int var_12 = 1409553428U;
unsigned int var_13 = 685413564U;
unsigned char var_17 = (unsigned char)112;
int zero = 0;
int var_19 = -1786983542;
unsigned int var_20 = 3841393505U;
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
