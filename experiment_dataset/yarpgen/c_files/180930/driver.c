#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12463;
unsigned char var_5 = (unsigned char)50;
short var_7 = (short)-1664;
short var_12 = (short)32475;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
long long int var_19 = 6194929973567828597LL;
unsigned long long int var_20 = 14212167804442816479ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
