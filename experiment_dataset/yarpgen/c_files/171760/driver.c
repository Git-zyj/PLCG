#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17064351061884595749ULL;
int var_3 = -1130180234;
unsigned char var_9 = (unsigned char)116;
int zero = 0;
unsigned char var_11 = (unsigned char)235;
unsigned char var_12 = (unsigned char)125;
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
