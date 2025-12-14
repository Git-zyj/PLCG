#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6371744412493265438ULL;
short var_8 = (short)-27023;
unsigned short var_9 = (unsigned short)16381;
unsigned short var_11 = (unsigned short)19575;
short var_13 = (short)6466;
int zero = 0;
unsigned char var_15 = (unsigned char)181;
unsigned char var_16 = (unsigned char)18;
void init() {
}

void checksum() {
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
