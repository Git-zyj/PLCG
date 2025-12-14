#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8823342307968944135LL;
unsigned long long int var_9 = 2765930235939618490ULL;
short var_11 = (short)-21300;
int zero = 0;
unsigned char var_12 = (unsigned char)124;
long long int var_13 = -8222146670095937700LL;
signed char var_14 = (signed char)-82;
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
