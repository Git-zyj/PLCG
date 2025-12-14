#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)12651;
unsigned int var_10 = 943733485U;
unsigned short var_11 = (unsigned short)26741;
int var_13 = 849933026;
int var_14 = -713297608;
int zero = 0;
unsigned short var_17 = (unsigned short)19769;
unsigned short var_18 = (unsigned short)35727;
void init() {
}

void checksum() {
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
