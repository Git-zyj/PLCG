#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1116985283;
long long int var_10 = 6991933085281350397LL;
int var_13 = 1185075408;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
long long int var_15 = -5712485316818133988LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
