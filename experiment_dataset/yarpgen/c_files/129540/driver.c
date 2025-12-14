#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_6 = 2407501972U;
unsigned char var_7 = (unsigned char)15;
unsigned short var_9 = (unsigned short)16629;
unsigned short var_10 = (unsigned short)61281;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-22618;
unsigned short var_13 = (unsigned short)9703;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)31447;
unsigned long long int var_17 = 14328060172519073506ULL;
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
