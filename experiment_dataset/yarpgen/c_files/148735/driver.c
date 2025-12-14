#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)22340;
unsigned short var_9 = (unsigned short)22058;
long long int var_13 = -4906319089174139698LL;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
short var_16 = (short)-22586;
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
