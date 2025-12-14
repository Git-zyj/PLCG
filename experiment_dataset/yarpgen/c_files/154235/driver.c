#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14942514361459009245ULL;
unsigned char var_6 = (unsigned char)237;
short var_8 = (short)-4434;
int var_9 = -1453922528;
int zero = 0;
unsigned char var_10 = (unsigned char)97;
unsigned long long int var_11 = 34372195534412994ULL;
unsigned char var_12 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
