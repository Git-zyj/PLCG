#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3875840653U;
unsigned int var_11 = 1448640972U;
unsigned int var_12 = 4161639296U;
int zero = 0;
unsigned long long int var_14 = 5079064618193048619ULL;
unsigned char var_15 = (unsigned char)178;
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
