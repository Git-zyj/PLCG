#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 675791132;
unsigned short var_10 = (unsigned short)10824;
unsigned char var_14 = (unsigned char)116;
short var_16 = (short)-28285;
int zero = 0;
unsigned long long int var_18 = 14433019839358211005ULL;
unsigned int var_19 = 4117226804U;
unsigned char var_20 = (unsigned char)207;
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
