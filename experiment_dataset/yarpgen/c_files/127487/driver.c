#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3483828835910742183ULL;
unsigned long long int var_5 = 11463424842523170822ULL;
unsigned long long int var_7 = 6577309018361755528ULL;
unsigned long long int var_9 = 3793538587095920238ULL;
unsigned long long int var_13 = 2932818608412790753ULL;
int zero = 0;
unsigned long long int var_16 = 16530433010100138385ULL;
unsigned long long int var_17 = 9902252923832495460ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
