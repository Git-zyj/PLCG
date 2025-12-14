#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1755514138306361392LL;
short var_11 = (short)-7316;
short var_13 = (short)26366;
unsigned char var_15 = (unsigned char)53;
int zero = 0;
int var_17 = -1160481792;
long long int var_18 = 6626140690690027907LL;
void init() {
}

void checksum() {
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
