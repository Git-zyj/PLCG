#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3964778232340907112ULL;
long long int var_1 = 6269205544094014820LL;
unsigned long long int var_2 = 15085436424387825616ULL;
signed char var_9 = (signed char)-86;
short var_13 = (short)3503;
int zero = 0;
unsigned char var_15 = (unsigned char)229;
unsigned int var_16 = 2431401039U;
void init() {
}

void checksum() {
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
