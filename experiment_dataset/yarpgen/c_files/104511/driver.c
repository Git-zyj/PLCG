#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11063543347053643450ULL;
short var_3 = (short)-29220;
int var_6 = 1418500759;
short var_7 = (short)14551;
signed char var_9 = (signed char)3;
int var_10 = -960281212;
int zero = 0;
unsigned short var_15 = (unsigned short)3934;
short var_16 = (short)-16786;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
