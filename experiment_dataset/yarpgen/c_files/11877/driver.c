#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12184624706793216884ULL;
unsigned long long int var_5 = 1292650233024182313ULL;
signed char var_6 = (signed char)-69;
unsigned short var_11 = (unsigned short)48281;
short var_12 = (short)22558;
int zero = 0;
long long int var_13 = 9122494911595771777LL;
short var_14 = (short)18969;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
