#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2153693937426857355LL;
long long int var_9 = 1503788699659728153LL;
unsigned char var_15 = (unsigned char)38;
int zero = 0;
long long int var_18 = 2122129471808811597LL;
short var_19 = (short)-13647;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
