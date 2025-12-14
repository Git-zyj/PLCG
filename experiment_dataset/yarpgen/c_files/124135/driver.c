#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3977803743U;
unsigned int var_11 = 1291749150U;
unsigned short var_13 = (unsigned short)25802;
int zero = 0;
unsigned short var_15 = (unsigned short)48285;
long long int var_16 = 469699741550546397LL;
signed char var_17 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
