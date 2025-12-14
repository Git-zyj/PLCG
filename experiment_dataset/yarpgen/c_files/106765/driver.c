#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31344;
unsigned char var_3 = (unsigned char)133;
unsigned long long int var_4 = 232880766676635173ULL;
unsigned short var_7 = (unsigned short)18319;
unsigned char var_8 = (unsigned char)59;
unsigned long long int var_9 = 17804472827799312519ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)127;
unsigned char var_11 = (unsigned char)38;
unsigned short var_12 = (unsigned short)20888;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
