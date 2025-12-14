#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 7001830554785357913ULL;
unsigned char var_12 = (unsigned char)171;
unsigned long long int var_13 = 13136145063583204334ULL;
short var_14 = (short)24526;
int zero = 0;
short var_16 = (short)-10058;
signed char var_17 = (signed char)123;
long long int var_18 = 4334849286207843640LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
