#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14041592174407331398ULL;
long long int var_10 = 589671924750184510LL;
unsigned short var_11 = (unsigned short)30394;
int zero = 0;
long long int var_12 = -5045338229402231287LL;
long long int var_13 = 8777422242547342535LL;
unsigned int var_14 = 1008646126U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
