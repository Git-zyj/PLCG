#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32715;
unsigned short var_3 = (unsigned short)64922;
long long int var_6 = -7129784173737212008LL;
unsigned short var_9 = (unsigned short)19789;
long long int var_10 = 7227069296648280995LL;
int zero = 0;
int var_11 = 526140576;
unsigned int var_12 = 1948343475U;
int var_13 = 173574383;
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
