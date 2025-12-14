#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)10;
short var_5 = (short)-25532;
unsigned int var_9 = 1534176071U;
signed char var_10 = (signed char)40;
int zero = 0;
long long int var_14 = 493885644258738423LL;
unsigned char var_15 = (unsigned char)34;
unsigned char var_16 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
