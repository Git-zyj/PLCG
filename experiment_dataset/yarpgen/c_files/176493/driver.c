#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7831084697012397361LL;
long long int var_4 = 7762263133833995207LL;
unsigned char var_6 = (unsigned char)17;
unsigned char var_12 = (unsigned char)126;
long long int var_17 = 5588354360984866429LL;
int zero = 0;
long long int var_19 = 2179774965892102808LL;
unsigned char var_20 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
