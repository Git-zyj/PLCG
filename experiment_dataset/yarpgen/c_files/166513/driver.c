#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
unsigned char var_2 = (unsigned char)102;
unsigned long long int var_5 = 1565750571427822410ULL;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
unsigned short var_19 = (unsigned short)26973;
unsigned int var_20 = 4184991801U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
