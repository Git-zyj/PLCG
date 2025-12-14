#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7135835713957011460LL;
unsigned char var_3 = (unsigned char)146;
signed char var_5 = (signed char)21;
signed char var_6 = (signed char)80;
long long int var_11 = 563397698500122769LL;
int zero = 0;
unsigned short var_13 = (unsigned short)9841;
long long int var_14 = 4401432114659613297LL;
void init() {
}

void checksum() {
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
