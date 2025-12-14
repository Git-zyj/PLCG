#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2354256137U;
unsigned int var_9 = 19245508U;
long long int var_10 = 2813640866387100202LL;
unsigned short var_12 = (unsigned short)29079;
int zero = 0;
unsigned long long int var_18 = 8351048360761839914ULL;
unsigned int var_19 = 1798966082U;
int var_20 = 521974988;
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
