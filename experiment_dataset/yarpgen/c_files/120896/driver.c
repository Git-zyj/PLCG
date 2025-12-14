#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2619520075U;
unsigned short var_8 = (unsigned short)4732;
unsigned long long int var_11 = 14343283215301572308ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1038595912U;
unsigned char var_16 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
