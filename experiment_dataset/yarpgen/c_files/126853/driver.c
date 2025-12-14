#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)64;
unsigned long long int var_13 = 6501235656039567826ULL;
long long int var_17 = 1224086547432857608LL;
int zero = 0;
unsigned int var_20 = 1848502762U;
unsigned short var_21 = (unsigned short)21855;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
