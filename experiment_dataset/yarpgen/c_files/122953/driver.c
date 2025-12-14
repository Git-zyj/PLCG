#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15687;
short var_2 = (short)32763;
unsigned long long int var_3 = 3011099025626492436ULL;
unsigned long long int var_4 = 17465560211424198432ULL;
unsigned long long int var_7 = 5181146557400113293ULL;
unsigned short var_10 = (unsigned short)38552;
long long int var_11 = 1606113103909542352LL;
int zero = 0;
unsigned int var_12 = 3334728068U;
unsigned char var_13 = (unsigned char)94;
void init() {
}

void checksum() {
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
