#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3856909127981334725ULL;
short var_7 = (short)-1392;
unsigned long long int var_8 = 17608456694146738387ULL;
int var_9 = -1821156519;
int zero = 0;
short var_10 = (short)20987;
unsigned char var_11 = (unsigned char)61;
long long int var_12 = 250654897640284979LL;
short var_13 = (short)-7215;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
