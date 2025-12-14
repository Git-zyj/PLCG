#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
short var_3 = (short)-18647;
unsigned char var_4 = (unsigned char)187;
short var_7 = (short)-3739;
unsigned short var_9 = (unsigned short)52440;
unsigned char var_10 = (unsigned char)169;
long long int var_13 = 8004697597666565331LL;
unsigned long long int var_14 = 5420588010688663003ULL;
int zero = 0;
short var_15 = (short)18677;
unsigned char var_16 = (unsigned char)27;
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
