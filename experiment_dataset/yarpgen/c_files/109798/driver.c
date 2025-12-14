#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
signed char var_4 = (signed char)-118;
unsigned int var_13 = 1866382823U;
int zero = 0;
signed char var_15 = (signed char)17;
unsigned long long int var_16 = 6746087823387599089ULL;
unsigned short var_17 = (unsigned short)61480;
unsigned int var_18 = 4020312904U;
unsigned int var_19 = 605624307U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
