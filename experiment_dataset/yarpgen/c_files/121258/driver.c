#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)32403;
signed char var_12 = (signed char)-37;
unsigned long long int var_16 = 6056759129828039614ULL;
int zero = 0;
short var_18 = (short)19476;
signed char var_19 = (signed char)103;
unsigned char var_20 = (unsigned char)142;
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
