#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)44;
unsigned long long int var_8 = 14477812282673693712ULL;
unsigned short var_9 = (unsigned short)12887;
int zero = 0;
long long int var_10 = -5964249545420032523LL;
long long int var_11 = 1150786388973290851LL;
unsigned short var_12 = (unsigned short)20973;
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
