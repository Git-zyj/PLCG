#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5677260436198205539LL;
signed char var_3 = (signed char)-13;
unsigned char var_5 = (unsigned char)71;
signed char var_8 = (signed char)55;
long long int var_9 = 5741508718540598636LL;
unsigned short var_12 = (unsigned short)26676;
signed char var_13 = (signed char)10;
unsigned short var_15 = (unsigned short)53751;
unsigned short var_16 = (unsigned short)8431;
int zero = 0;
signed char var_17 = (signed char)27;
signed char var_18 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
