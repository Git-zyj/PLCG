#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
unsigned char var_3 = (unsigned char)61;
signed char var_4 = (signed char)66;
signed char var_5 = (signed char)-125;
_Bool var_6 = (_Bool)1;
int var_8 = 1477987051;
int var_9 = 1641064103;
int zero = 0;
unsigned short var_10 = (unsigned short)24487;
int var_11 = 1468908087;
int var_12 = -538374112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
