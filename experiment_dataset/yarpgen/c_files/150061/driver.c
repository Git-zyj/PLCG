#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3301563273127687440LL;
unsigned char var_2 = (unsigned char)111;
long long int var_5 = -7499599612459055611LL;
int var_6 = -205504817;
int var_7 = 648841483;
unsigned char var_10 = (unsigned char)219;
short var_12 = (short)-22840;
unsigned long long int var_13 = 13755369057582226544ULL;
int zero = 0;
unsigned int var_14 = 2361043277U;
unsigned int var_15 = 3311155075U;
signed char var_16 = (signed char)0;
void init() {
}

void checksum() {
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
