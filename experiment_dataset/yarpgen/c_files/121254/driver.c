#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2727804472162511281LL;
unsigned short var_9 = (unsigned short)53242;
long long int var_10 = -1367821761583183311LL;
int zero = 0;
unsigned short var_14 = (unsigned short)22019;
short var_15 = (short)-2887;
short var_16 = (short)7993;
void init() {
}

void checksum() {
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
