#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15170864003399039665ULL;
unsigned char var_3 = (unsigned char)240;
unsigned char var_7 = (unsigned char)124;
int var_16 = -71520719;
int zero = 0;
unsigned char var_19 = (unsigned char)66;
int var_20 = 1541133138;
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
