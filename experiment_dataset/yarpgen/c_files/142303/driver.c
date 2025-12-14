#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17204;
long long int var_1 = -415554286398616716LL;
int var_2 = -2264603;
unsigned int var_3 = 3282263189U;
short var_9 = (short)-10482;
int zero = 0;
unsigned long long int var_13 = 176359792757674430ULL;
int var_14 = -1560743750;
unsigned char var_15 = (unsigned char)95;
int var_16 = 127879638;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
