#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6850653081964041547ULL;
int var_4 = -2117425611;
unsigned char var_5 = (unsigned char)112;
unsigned long long int var_6 = 14810466587675860695ULL;
int zero = 0;
int var_13 = 538710195;
unsigned char var_14 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
