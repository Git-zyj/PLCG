#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49319;
int var_1 = 655036045;
unsigned char var_2 = (unsigned char)16;
int var_5 = 1320409212;
long long int var_8 = -3921910682429930407LL;
unsigned short var_13 = (unsigned short)32389;
int zero = 0;
long long int var_16 = -5817817956428415036LL;
unsigned short var_17 = (unsigned short)8546;
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
