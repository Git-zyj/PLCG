#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_5 = 9308213723645174812ULL;
signed char var_7 = (signed char)-44;
unsigned long long int var_8 = 1752680051910074455ULL;
int zero = 0;
int var_12 = 185872379;
unsigned int var_13 = 512384670U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
