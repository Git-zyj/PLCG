#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7176429106023632292LL;
unsigned short var_7 = (unsigned short)20366;
unsigned short var_10 = (unsigned short)9520;
unsigned char var_11 = (unsigned char)112;
int zero = 0;
short var_15 = (short)-26028;
signed char var_16 = (signed char)-34;
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
