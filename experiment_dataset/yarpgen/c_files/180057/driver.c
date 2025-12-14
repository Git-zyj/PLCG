#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)194;
long long int var_12 = 8601695061888221186LL;
signed char var_13 = (signed char)110;
long long int var_16 = -8652593553451993515LL;
int zero = 0;
unsigned short var_20 = (unsigned short)4220;
unsigned char var_21 = (unsigned char)126;
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
