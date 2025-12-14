#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
int var_2 = 1284454782;
short var_4 = (short)14030;
signed char var_5 = (signed char)64;
unsigned short var_8 = (unsigned short)16494;
unsigned int var_10 = 3016776426U;
int zero = 0;
short var_13 = (short)-30898;
unsigned long long int var_14 = 8194279038679964412ULL;
long long int var_15 = 1241515650303737541LL;
int var_16 = 1960863138;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
