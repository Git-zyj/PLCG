#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1577837222;
unsigned short var_3 = (unsigned short)8831;
unsigned int var_5 = 1271426813U;
long long int var_9 = -4700390143139893007LL;
int zero = 0;
unsigned short var_10 = (unsigned short)27789;
short var_11 = (short)-5956;
unsigned char var_12 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
