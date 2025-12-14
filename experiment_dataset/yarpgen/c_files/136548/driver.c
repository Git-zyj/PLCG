#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1039476578503318366ULL;
unsigned long long int var_3 = 3481148999851963345ULL;
unsigned char var_4 = (unsigned char)128;
unsigned int var_9 = 260218097U;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
unsigned short var_11 = (unsigned short)7412;
short var_12 = (short)27319;
void init() {
}

void checksum() {
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
