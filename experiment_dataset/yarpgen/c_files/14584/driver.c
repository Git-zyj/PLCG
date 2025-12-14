#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)187;
unsigned short var_9 = (unsigned short)4475;
unsigned long long int var_16 = 12163366362208369307ULL;
int var_17 = -1929523261;
int zero = 0;
long long int var_19 = 8568151427847692932LL;
signed char var_20 = (signed char)-8;
unsigned int var_21 = 3452755600U;
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
