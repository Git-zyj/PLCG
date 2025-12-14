#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 600812004;
short var_3 = (short)-31116;
unsigned char var_4 = (unsigned char)126;
short var_8 = (short)28997;
unsigned int var_9 = 2014464662U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)74;
unsigned short var_12 = (unsigned short)34778;
int var_13 = 1765789896;
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
