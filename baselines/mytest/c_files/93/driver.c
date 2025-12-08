#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3380630086531420936ULL;
signed char var_8 = (signed char)10;
unsigned char var_11 = (unsigned char)83;
int zero = 0;
unsigned short var_17 = (unsigned short)53243;
unsigned short var_18 = (unsigned short)32116;
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
