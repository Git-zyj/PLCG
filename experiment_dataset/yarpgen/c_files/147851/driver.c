#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
unsigned char var_4 = (unsigned char)171;
long long int var_6 = 1437712098655063181LL;
int zero = 0;
long long int var_12 = 931993563259614492LL;
unsigned char var_13 = (unsigned char)191;
long long int var_14 = -8488689688622508932LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
