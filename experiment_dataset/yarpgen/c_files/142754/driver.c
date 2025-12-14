#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)42115;
unsigned char var_7 = (unsigned char)66;
long long int var_10 = 6543349101189866533LL;
int zero = 0;
unsigned char var_14 = (unsigned char)74;
long long int var_15 = -6881946083820551682LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
