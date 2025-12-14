#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 714004483U;
unsigned int var_3 = 3208988675U;
unsigned char var_10 = (unsigned char)18;
int zero = 0;
unsigned char var_18 = (unsigned char)190;
short var_19 = (short)-24864;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
