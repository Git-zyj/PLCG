#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned long long int var_2 = 9152798911131168463ULL;
unsigned int var_5 = 1958516313U;
signed char var_9 = (signed char)90;
int zero = 0;
unsigned char var_11 = (unsigned char)28;
short var_12 = (short)-21002;
unsigned long long int var_13 = 7314141262754313372ULL;
void init() {
}

void checksum() {
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
