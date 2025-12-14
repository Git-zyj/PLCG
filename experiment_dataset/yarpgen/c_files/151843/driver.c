#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 47956262831877732LL;
unsigned int var_4 = 2763575239U;
signed char var_5 = (signed char)127;
unsigned char var_6 = (unsigned char)92;
unsigned long long int var_7 = 16568059907024539396ULL;
int zero = 0;
long long int var_12 = -1663101167026433316LL;
unsigned int var_13 = 2445238470U;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
