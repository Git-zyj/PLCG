#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 112570317;
unsigned char var_11 = (unsigned char)133;
int var_14 = 1002798776;
signed char var_17 = (signed char)16;
int zero = 0;
unsigned short var_19 = (unsigned short)4518;
int var_20 = -1641080409;
long long int var_21 = 6157334356082387394LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
