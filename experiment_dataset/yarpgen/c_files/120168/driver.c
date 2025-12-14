#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4181817585U;
unsigned int var_2 = 3269460719U;
unsigned int var_4 = 4283071245U;
int var_5 = -747354995;
signed char var_7 = (signed char)83;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
int var_13 = -347037782;
long long int var_14 = 140290364194966916LL;
int var_15 = 1953517879;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
