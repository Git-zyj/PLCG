#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1161904746U;
int var_1 = -541073197;
long long int var_2 = 6473605919327706042LL;
unsigned char var_4 = (unsigned char)239;
short var_5 = (short)4395;
unsigned int var_6 = 2388233059U;
unsigned long long int var_7 = 15806875640517091121ULL;
int zero = 0;
signed char var_10 = (signed char)90;
int var_11 = -702382769;
unsigned long long int var_12 = 4607338234153617869ULL;
long long int var_13 = 7693844752820827924LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
