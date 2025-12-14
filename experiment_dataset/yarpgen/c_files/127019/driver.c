#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2563922935U;
long long int var_2 = -3378111278694580569LL;
unsigned long long int var_4 = 17760780957697789315ULL;
int zero = 0;
unsigned int var_11 = 4066984983U;
unsigned char var_12 = (unsigned char)140;
int var_13 = -1277312436;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
