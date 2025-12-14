#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11311156054987686291ULL;
unsigned long long int var_8 = 16573145724625838756ULL;
unsigned short var_9 = (unsigned short)63858;
int zero = 0;
unsigned short var_13 = (unsigned short)44403;
unsigned int var_14 = 1197762680U;
void init() {
}

void checksum() {
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
