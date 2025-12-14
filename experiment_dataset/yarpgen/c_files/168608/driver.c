#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2669908365643872775LL;
signed char var_12 = (signed char)-106;
long long int var_13 = 6042158740487922862LL;
int zero = 0;
unsigned char var_16 = (unsigned char)197;
short var_17 = (short)-8810;
short var_18 = (short)28772;
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
