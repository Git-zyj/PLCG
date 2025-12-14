#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13953080865458316110ULL;
unsigned char var_5 = (unsigned char)231;
short var_6 = (short)19604;
int zero = 0;
int var_12 = 1541191361;
unsigned short var_13 = (unsigned short)34831;
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
