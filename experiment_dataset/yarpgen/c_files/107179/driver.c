#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29689;
unsigned short var_3 = (unsigned short)40093;
long long int var_4 = -7387500927494556437LL;
short var_7 = (short)-5822;
unsigned short var_10 = (unsigned short)59623;
int zero = 0;
unsigned char var_11 = (unsigned char)187;
unsigned short var_12 = (unsigned short)9122;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
