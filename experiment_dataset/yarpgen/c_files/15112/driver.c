#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1529149077U;
unsigned long long int var_2 = 2460020166330457936ULL;
unsigned long long int var_4 = 18310368695321759652ULL;
unsigned char var_6 = (unsigned char)127;
unsigned char var_7 = (unsigned char)15;
int zero = 0;
unsigned char var_13 = (unsigned char)224;
unsigned int var_14 = 3473610361U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
