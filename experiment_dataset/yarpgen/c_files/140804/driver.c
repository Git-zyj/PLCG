#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
long long int var_2 = -158878301809959416LL;
unsigned int var_3 = 331547558U;
long long int var_8 = -7998936070749218209LL;
unsigned char var_9 = (unsigned char)96;
int zero = 0;
unsigned short var_10 = (unsigned short)60565;
int var_11 = 1040171771;
unsigned int var_12 = 1362942124U;
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
