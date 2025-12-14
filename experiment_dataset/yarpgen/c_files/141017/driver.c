#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1584722133;
unsigned char var_10 = (unsigned char)166;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 39387961;
unsigned char var_19 = (unsigned char)71;
short var_20 = (short)-27598;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
