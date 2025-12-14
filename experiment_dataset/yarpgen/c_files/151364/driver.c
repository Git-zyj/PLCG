#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-21128;
unsigned short var_13 = (unsigned short)29603;
long long int var_16 = -4928875781398607089LL;
int zero = 0;
unsigned short var_20 = (unsigned short)7467;
unsigned long long int var_21 = 12978540604312824487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
