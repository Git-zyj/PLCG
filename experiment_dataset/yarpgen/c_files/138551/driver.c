#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 167940371;
int var_4 = 1536701982;
unsigned short var_6 = (unsigned short)47342;
unsigned char var_9 = (unsigned char)185;
int zero = 0;
long long int var_10 = -4726151661052418339LL;
short var_11 = (short)17115;
int var_12 = -1123400451;
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
