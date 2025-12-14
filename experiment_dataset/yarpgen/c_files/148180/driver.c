#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28470;
long long int var_5 = -806024593020383785LL;
unsigned char var_9 = (unsigned char)90;
unsigned char var_10 = (unsigned char)143;
int zero = 0;
long long int var_11 = -1883598907558238574LL;
unsigned char var_12 = (unsigned char)165;
void init() {
}

void checksum() {
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
