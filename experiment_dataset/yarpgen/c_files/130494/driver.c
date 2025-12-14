#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20983;
signed char var_5 = (signed char)-97;
unsigned short var_10 = (unsigned short)38446;
int zero = 0;
signed char var_14 = (signed char)-61;
long long int var_15 = 7913990399121485381LL;
unsigned long long int var_16 = 17755304654799491309ULL;
int var_17 = -817413930;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
