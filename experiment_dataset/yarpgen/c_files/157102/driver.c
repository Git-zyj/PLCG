#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2028342306U;
unsigned long long int var_13 = 10376636396512648995ULL;
int zero = 0;
short var_14 = (short)7218;
unsigned short var_15 = (unsigned short)4343;
signed char var_16 = (signed char)20;
unsigned char var_17 = (unsigned char)238;
unsigned char var_18 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
