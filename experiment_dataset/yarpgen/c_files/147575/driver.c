#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned char var_4 = (unsigned char)197;
short var_8 = (short)2730;
signed char var_10 = (signed char)18;
int zero = 0;
short var_13 = (short)-23160;
long long int var_14 = 8604165175640025980LL;
signed char var_15 = (signed char)-4;
unsigned char var_16 = (unsigned char)4;
long long int var_17 = 7720844719385051176LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
