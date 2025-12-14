#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -777463241;
unsigned long long int var_6 = 2722479450401025482ULL;
int var_8 = -1825778204;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)24;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
signed char var_13 = (signed char)17;
short var_14 = (short)-2615;
void init() {
}

void checksum() {
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
