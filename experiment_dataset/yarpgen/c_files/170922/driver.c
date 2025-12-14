#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1962859316;
int var_4 = -301005483;
int var_5 = -510998872;
unsigned long long int var_7 = 18354272562274999863ULL;
unsigned short var_10 = (unsigned short)26089;
short var_11 = (short)-9943;
int zero = 0;
unsigned char var_12 = (unsigned char)91;
unsigned long long int var_13 = 8930805370051169563ULL;
void init() {
}

void checksum() {
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
