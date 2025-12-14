#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)79;
unsigned char var_4 = (unsigned char)24;
long long int var_5 = -5883733099406567624LL;
unsigned long long int var_6 = 8340391225386532045ULL;
unsigned long long int var_7 = 11438494291552487206ULL;
unsigned short var_8 = (unsigned short)62112;
unsigned long long int var_9 = 15899662731349389528ULL;
unsigned int var_10 = 2887194088U;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -3308986179056917823LL;
signed char var_16 = (signed char)-20;
unsigned int var_17 = 3463216876U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
