#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 895185007U;
unsigned short var_6 = (unsigned short)11522;
int var_13 = -486115554;
int zero = 0;
unsigned long long int var_17 = 14146988950730498279ULL;
unsigned short var_18 = (unsigned short)13261;
short var_19 = (short)-30423;
signed char var_20 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
