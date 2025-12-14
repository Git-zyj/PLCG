#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19206;
unsigned int var_5 = 2686871803U;
unsigned char var_9 = (unsigned char)121;
int zero = 0;
short var_10 = (short)-1645;
unsigned short var_11 = (unsigned short)3511;
unsigned long long int var_12 = 12769305022396542756ULL;
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
