#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9133634286648474446LL;
unsigned char var_8 = (unsigned char)220;
unsigned int var_11 = 307956385U;
int zero = 0;
unsigned long long int var_13 = 594797240765059191ULL;
unsigned int var_14 = 3892194412U;
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
