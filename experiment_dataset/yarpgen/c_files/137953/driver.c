#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4371;
unsigned long long int var_8 = 16814129948525385306ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)253;
long long int var_11 = -5111421641123880448LL;
unsigned short var_12 = (unsigned short)50705;
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
