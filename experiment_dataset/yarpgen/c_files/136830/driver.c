#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24232;
unsigned long long int var_4 = 7361354579707698890ULL;
unsigned long long int var_12 = 11641365785565671781ULL;
unsigned char var_14 = (unsigned char)49;
int zero = 0;
unsigned char var_16 = (unsigned char)185;
unsigned long long int var_17 = 901696929644145878ULL;
long long int var_18 = 7691053857454605856LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
