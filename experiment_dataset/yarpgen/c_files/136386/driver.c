#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2418;
int var_1 = -1717358025;
signed char var_2 = (signed char)-113;
long long int var_6 = -6832688153158478793LL;
unsigned long long int var_8 = 15953755216188580474ULL;
long long int var_9 = 5607776610698594082LL;
unsigned char var_10 = (unsigned char)174;
int zero = 0;
unsigned short var_11 = (unsigned short)50218;
long long int var_12 = -2490410907463602753LL;
int var_13 = 1098560979;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
