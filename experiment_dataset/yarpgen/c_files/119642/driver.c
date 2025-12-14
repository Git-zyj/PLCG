#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -1386074378177726098LL;
unsigned long long int var_13 = 17115389800044097091ULL;
int var_18 = 929176828;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
signed char var_20 = (signed char)8;
void init() {
}

void checksum() {
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
