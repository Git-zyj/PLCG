#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1673882768U;
unsigned int var_1 = 3459493895U;
long long int var_2 = -496391075770554345LL;
long long int var_5 = -5741602437827832870LL;
int var_6 = 532584703;
unsigned long long int var_8 = 16835119421015348333ULL;
unsigned short var_12 = (unsigned short)44031;
unsigned long long int var_14 = 7490909132682412467ULL;
int zero = 0;
unsigned int var_18 = 4158745010U;
unsigned char var_19 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
