#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27237;
unsigned char var_6 = (unsigned char)232;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 4260349860631173079ULL;
_Bool var_16 = (_Bool)0;
int var_17 = -1156777308;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
