#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6466498836214351150LL;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-16695;
int var_11 = -1306470937;
long long int var_13 = 8253071582032759780LL;
unsigned char var_15 = (unsigned char)79;
int var_16 = 615790702;
short var_17 = (short)10988;
int zero = 0;
short var_20 = (short)-22882;
unsigned int var_21 = 602807790U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
