#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-21865;
short var_10 = (short)11293;
unsigned short var_15 = (unsigned short)11708;
short var_16 = (short)21617;
int zero = 0;
signed char var_19 = (signed char)-46;
unsigned short var_20 = (unsigned short)45033;
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
