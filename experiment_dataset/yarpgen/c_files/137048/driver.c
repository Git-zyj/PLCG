#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51589;
long long int var_1 = -3818605761469964484LL;
unsigned int var_2 = 1421988994U;
signed char var_4 = (signed char)54;
int var_5 = -517783034;
unsigned char var_7 = (unsigned char)214;
unsigned long long int var_9 = 14346167564970808051ULL;
int zero = 0;
short var_10 = (short)-7997;
int var_11 = 610444282;
unsigned short var_12 = (unsigned short)20078;
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
