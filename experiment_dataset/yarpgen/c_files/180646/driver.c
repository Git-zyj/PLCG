#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4144732412802173151LL;
short var_4 = (short)-32725;
signed char var_6 = (signed char)71;
signed char var_10 = (signed char)79;
int zero = 0;
unsigned char var_15 = (unsigned char)10;
unsigned long long int var_16 = 17890305425572207769ULL;
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
