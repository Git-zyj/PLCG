#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1215805721U;
unsigned int var_3 = 4021965852U;
int var_6 = 1864591565;
unsigned short var_11 = (unsigned short)21803;
int zero = 0;
int var_18 = 2008892216;
unsigned char var_19 = (unsigned char)164;
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
