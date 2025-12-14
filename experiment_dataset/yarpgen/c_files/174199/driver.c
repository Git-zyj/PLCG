#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1693461931;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3972198392U;
unsigned char var_13 = (unsigned char)38;
int zero = 0;
int var_14 = 539427470;
unsigned char var_15 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
