#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
short var_7 = (short)30710;
signed char var_10 = (signed char)100;
int zero = 0;
int var_15 = -1430484993;
unsigned short var_16 = (unsigned short)42032;
unsigned char var_17 = (unsigned char)155;
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
