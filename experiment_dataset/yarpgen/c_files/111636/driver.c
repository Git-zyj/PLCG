#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17442;
long long int var_5 = 6419771054236136619LL;
int var_9 = -1910566694;
long long int var_10 = -2807735490411678390LL;
unsigned char var_11 = (unsigned char)113;
short var_13 = (short)-22195;
int zero = 0;
long long int var_15 = -1644577063333522108LL;
unsigned char var_16 = (unsigned char)224;
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
