#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned long long int var_2 = 4636573347209509906ULL;
int var_3 = -36385278;
unsigned char var_4 = (unsigned char)128;
unsigned char var_5 = (unsigned char)168;
unsigned char var_6 = (unsigned char)67;
unsigned char var_8 = (unsigned char)250;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
int var_10 = 1986670820;
int var_11 = -232798512;
unsigned char var_12 = (unsigned char)137;
unsigned long long int var_13 = 945944203676280157ULL;
unsigned char var_14 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
