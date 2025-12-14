#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8128181351734668018ULL;
unsigned long long int var_5 = 5484257488455353097ULL;
short var_10 = (short)14668;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
unsigned long long int var_12 = 4823391219681082574ULL;
long long int var_13 = -1835046571027371181LL;
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
