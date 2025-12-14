#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
signed char var_1 = (signed char)81;
unsigned long long int var_3 = 5513133945064571773ULL;
int var_5 = 623082414;
unsigned int var_6 = 3397130941U;
unsigned long long int var_8 = 15149552865814413299ULL;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned int var_14 = 3407147771U;
unsigned long long int var_15 = 4717205973770785649ULL;
void init() {
}

void checksum() {
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
