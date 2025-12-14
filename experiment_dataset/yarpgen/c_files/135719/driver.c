#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13241587750254681422ULL;
unsigned char var_2 = (unsigned char)40;
unsigned short var_14 = (unsigned short)62333;
unsigned int var_15 = 3236147773U;
int zero = 0;
short var_17 = (short)-25211;
unsigned char var_18 = (unsigned char)37;
unsigned int var_19 = 1594175217U;
void init() {
}

void checksum() {
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
