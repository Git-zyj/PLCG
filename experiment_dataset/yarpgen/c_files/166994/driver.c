#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13921;
unsigned short var_2 = (unsigned short)56360;
unsigned char var_3 = (unsigned char)246;
signed char var_7 = (signed char)123;
short var_8 = (short)-21879;
signed char var_9 = (signed char)101;
unsigned short var_12 = (unsigned short)19510;
int zero = 0;
long long int var_16 = -1608839875658298178LL;
unsigned long long int var_17 = 8968056995449830318ULL;
unsigned short var_18 = (unsigned short)5696;
void init() {
}

void checksum() {
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
