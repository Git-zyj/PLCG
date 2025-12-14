#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
short var_1 = (short)-7389;
signed char var_5 = (signed char)93;
unsigned int var_7 = 4267489114U;
signed char var_8 = (signed char)-112;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
unsigned long long int var_11 = 7653939027881263582ULL;
signed char var_12 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
