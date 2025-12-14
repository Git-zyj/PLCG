#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1297230711;
unsigned short var_7 = (unsigned short)117;
unsigned long long int var_10 = 16587006662033467688ULL;
int zero = 0;
int var_12 = 420254542;
unsigned int var_13 = 2529948699U;
short var_14 = (short)-27012;
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
