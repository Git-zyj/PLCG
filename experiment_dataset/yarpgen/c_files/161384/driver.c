#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
long long int var_4 = -5495459063724007827LL;
int var_12 = -1164946246;
unsigned long long int var_13 = 992358159850773789ULL;
int zero = 0;
int var_18 = -1378836369;
int var_19 = 944523722;
signed char var_20 = (signed char)33;
unsigned char var_21 = (unsigned char)166;
short var_22 = (short)-29020;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
