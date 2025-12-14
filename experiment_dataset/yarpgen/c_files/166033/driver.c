#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14454;
unsigned short var_4 = (unsigned short)46418;
unsigned short var_8 = (unsigned short)31918;
unsigned char var_9 = (unsigned char)140;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
short var_14 = (short)28820;
unsigned long long int var_15 = 5284299687802429237ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
