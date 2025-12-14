#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16812242852719789174ULL;
unsigned long long int var_1 = 16752819840300288897ULL;
unsigned int var_2 = 2689187038U;
unsigned int var_3 = 2897058861U;
unsigned char var_4 = (unsigned char)214;
short var_6 = (short)843;
int var_9 = 1216439012;
int zero = 0;
long long int var_10 = 4415799705798128215LL;
unsigned short var_11 = (unsigned short)136;
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
