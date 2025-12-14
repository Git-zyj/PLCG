#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
unsigned char var_8 = (unsigned char)4;
long long int var_9 = 4548265823001632343LL;
signed char var_10 = (signed char)96;
int zero = 0;
unsigned int var_13 = 2695346627U;
unsigned int var_14 = 3344674318U;
unsigned char var_15 = (unsigned char)182;
unsigned char var_16 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
