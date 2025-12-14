#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
short var_2 = (short)14950;
unsigned char var_4 = (unsigned char)104;
unsigned char var_9 = (unsigned char)46;
int zero = 0;
short var_10 = (short)-20389;
unsigned long long int var_11 = 767000590155174830ULL;
unsigned char var_12 = (unsigned char)44;
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
