#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5958196622281262589LL;
long long int var_4 = -8579784276448352928LL;
short var_7 = (short)-4689;
unsigned char var_8 = (unsigned char)14;
unsigned short var_9 = (unsigned short)39498;
int zero = 0;
int var_10 = -163017571;
long long int var_11 = -6456997976269170971LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
