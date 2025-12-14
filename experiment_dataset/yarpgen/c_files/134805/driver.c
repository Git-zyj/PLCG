#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)108;
unsigned int var_7 = 3016968655U;
long long int var_8 = -4063308414194746031LL;
int zero = 0;
signed char var_11 = (signed char)116;
unsigned short var_12 = (unsigned short)21275;
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
