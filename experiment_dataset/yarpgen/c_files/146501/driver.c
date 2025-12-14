#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26393;
unsigned long long int var_2 = 9540725231001319518ULL;
unsigned char var_3 = (unsigned char)103;
short var_6 = (short)24630;
unsigned short var_8 = (unsigned short)64634;
int zero = 0;
int var_16 = 378130488;
unsigned long long int var_17 = 5050920877225708450ULL;
void init() {
}

void checksum() {
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
