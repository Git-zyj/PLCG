#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3787373758750651571LL;
unsigned short var_6 = (unsigned short)62433;
int var_7 = -1879523758;
short var_9 = (short)-5239;
int zero = 0;
unsigned short var_10 = (unsigned short)52036;
unsigned long long int var_11 = 7278218787315348731ULL;
unsigned long long int var_12 = 6903586274127175053ULL;
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
