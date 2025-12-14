#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53269;
signed char var_2 = (signed char)25;
long long int var_3 = 2454784824221678157LL;
int var_5 = -1664746189;
unsigned int var_7 = 3595270089U;
unsigned long long int var_8 = 8173872343543162186ULL;
unsigned char var_13 = (unsigned char)147;
unsigned char var_15 = (unsigned char)255;
int zero = 0;
long long int var_17 = 124972711727606788LL;
unsigned char var_18 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
