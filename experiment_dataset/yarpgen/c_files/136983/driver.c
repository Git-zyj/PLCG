#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3881269586600742222LL;
int var_4 = -1700954247;
long long int var_5 = 5915003152871285735LL;
long long int var_8 = 460247781340803150LL;
short var_12 = (short)-27416;
short var_15 = (short)-22515;
int zero = 0;
unsigned char var_16 = (unsigned char)55;
int var_17 = -949967590;
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
