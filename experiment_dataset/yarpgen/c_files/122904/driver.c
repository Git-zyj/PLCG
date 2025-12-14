#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1465042250U;
unsigned char var_11 = (unsigned char)169;
unsigned short var_16 = (unsigned short)38547;
int zero = 0;
short var_18 = (short)31112;
unsigned int var_19 = 2362939188U;
signed char var_20 = (signed char)-23;
void init() {
}

void checksum() {
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
