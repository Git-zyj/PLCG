#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8657785684029913788LL;
short var_3 = (short)-21041;
unsigned char var_11 = (unsigned char)4;
int zero = 0;
signed char var_13 = (signed char)112;
int var_14 = -620246987;
unsigned char var_15 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
