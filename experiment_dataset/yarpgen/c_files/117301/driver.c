#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30632;
unsigned char var_1 = (unsigned char)94;
long long int var_9 = 7403942060234641019LL;
long long int var_16 = 9195307140311618375LL;
int zero = 0;
unsigned char var_19 = (unsigned char)91;
unsigned char var_20 = (unsigned char)11;
long long int var_21 = 1677171948816561518LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
