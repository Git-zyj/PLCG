#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)208;
long long int var_2 = 1331333509314394007LL;
unsigned int var_4 = 1681234689U;
_Bool var_6 = (_Bool)0;
unsigned short var_14 = (unsigned short)3000;
int zero = 0;
signed char var_16 = (signed char)101;
signed char var_17 = (signed char)115;
void init() {
}

void checksum() {
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
