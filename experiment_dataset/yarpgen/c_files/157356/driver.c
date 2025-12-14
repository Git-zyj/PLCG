#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7121155682400447537LL;
unsigned int var_3 = 622128499U;
unsigned long long int var_4 = 13794849849033095544ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)27167;
unsigned long long int var_11 = 15896291244691592428ULL;
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
