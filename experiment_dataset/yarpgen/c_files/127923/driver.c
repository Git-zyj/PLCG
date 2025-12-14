#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34692;
unsigned long long int var_1 = 7587911189852749580ULL;
int var_2 = 1127158315;
unsigned short var_3 = (unsigned short)11525;
unsigned long long int var_4 = 15039683788107921120ULL;
unsigned short var_5 = (unsigned short)56012;
int var_6 = -1262802465;
unsigned short var_7 = (unsigned short)48088;
unsigned int var_8 = 924103001U;
unsigned long long int var_9 = 4416689507302622000ULL;
unsigned int var_11 = 3663933757U;
int zero = 0;
unsigned short var_14 = (unsigned short)39242;
unsigned int var_15 = 3638070975U;
unsigned short var_16 = (unsigned short)26600;
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
