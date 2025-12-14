#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)188;
unsigned short var_5 = (unsigned short)9362;
unsigned int var_6 = 1532204060U;
int var_7 = 232414912;
int zero = 0;
unsigned short var_11 = (unsigned short)61006;
long long int var_12 = 8782502255459045459LL;
unsigned short var_13 = (unsigned short)51880;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
