#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 719117303U;
unsigned char var_3 = (unsigned char)43;
long long int var_4 = 7901193638536457175LL;
unsigned short var_5 = (unsigned short)9204;
unsigned short var_7 = (unsigned short)33816;
short var_8 = (short)7735;
int zero = 0;
signed char var_10 = (signed char)112;
unsigned char var_11 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
