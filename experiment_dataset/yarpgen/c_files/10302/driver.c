#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5394049162242473026LL;
unsigned char var_5 = (unsigned char)53;
short var_6 = (short)424;
long long int var_11 = 2167665906097268880LL;
int zero = 0;
unsigned short var_14 = (unsigned short)4221;
long long int var_15 = 8002181670566975157LL;
unsigned short var_16 = (unsigned short)8361;
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
