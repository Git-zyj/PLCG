#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2742164570U;
int var_7 = 57425174;
long long int var_9 = 616667244966312355LL;
int zero = 0;
unsigned short var_11 = (unsigned short)28403;
unsigned long long int var_12 = 6703240803164425844ULL;
short var_13 = (short)-5483;
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
