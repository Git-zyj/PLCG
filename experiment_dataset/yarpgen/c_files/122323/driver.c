#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 950464618258838995LL;
short var_6 = (short)27547;
short var_8 = (short)-10328;
int zero = 0;
unsigned char var_10 = (unsigned char)170;
short var_11 = (short)6049;
short var_12 = (short)-6265;
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
