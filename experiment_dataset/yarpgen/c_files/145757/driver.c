#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5492914543100565421LL;
unsigned char var_6 = (unsigned char)22;
unsigned long long int var_7 = 11508928803957579806ULL;
long long int var_8 = -3425652858841694284LL;
unsigned short var_11 = (unsigned short)23607;
int zero = 0;
long long int var_13 = -8549718747159275770LL;
short var_14 = (short)14511;
unsigned int var_15 = 215854898U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
