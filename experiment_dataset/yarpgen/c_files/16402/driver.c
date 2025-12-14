#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 231376578;
short var_12 = (short)29797;
int var_14 = -776883748;
long long int var_17 = -5875090823101812800LL;
int zero = 0;
unsigned char var_18 = (unsigned char)205;
unsigned int var_19 = 2485554129U;
void init() {
}

void checksum() {
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
