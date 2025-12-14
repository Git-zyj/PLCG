#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25404;
unsigned long long int var_12 = 14665473167578411696ULL;
unsigned long long int var_14 = 7698178419404811262ULL;
int zero = 0;
signed char var_16 = (signed char)-15;
unsigned short var_17 = (unsigned short)36723;
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
