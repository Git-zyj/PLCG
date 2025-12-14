#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)150;
unsigned char var_10 = (unsigned char)111;
unsigned char var_13 = (unsigned char)1;
int zero = 0;
short var_15 = (short)-16791;
unsigned char var_16 = (unsigned char)181;
long long int var_17 = -5276698410349373873LL;
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
