#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2403903684000416470LL;
_Bool var_7 = (_Bool)0;
unsigned char var_13 = (unsigned char)145;
int var_16 = 1297732114;
int zero = 0;
unsigned int var_18 = 3532445101U;
unsigned char var_19 = (unsigned char)124;
long long int var_20 = 4407471720392420958LL;
void init() {
}

void checksum() {
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
