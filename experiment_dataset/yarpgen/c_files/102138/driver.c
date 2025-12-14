#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1101275953;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1336045098U;
unsigned char var_17 = (unsigned char)23;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2799524352U;
unsigned long long int var_20 = 14056970658046833069ULL;
void init() {
}

void checksum() {
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
