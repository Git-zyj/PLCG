#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7271481445518158981ULL;
long long int var_4 = 6453137815380119979LL;
unsigned long long int var_7 = 12053729589265697175ULL;
unsigned char var_13 = (unsigned char)125;
int zero = 0;
unsigned long long int var_14 = 11627194735371585114ULL;
signed char var_15 = (signed char)79;
unsigned char var_16 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
