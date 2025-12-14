#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3070780205748109021ULL;
int var_2 = 1460055971;
int var_4 = 1426525118;
short var_6 = (short)15998;
short var_10 = (short)-10882;
unsigned char var_12 = (unsigned char)141;
long long int var_14 = -4733658733276174058LL;
int zero = 0;
unsigned long long int var_15 = 15024719363712799074ULL;
unsigned char var_16 = (unsigned char)190;
unsigned short var_17 = (unsigned short)2565;
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
