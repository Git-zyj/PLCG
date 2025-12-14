#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1893293326U;
long long int var_6 = -3427063852466192057LL;
short var_7 = (short)-10385;
int zero = 0;
unsigned int var_12 = 389446826U;
int var_13 = 445166288;
signed char var_14 = (signed char)34;
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
