#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4665330768322755127LL;
unsigned int var_11 = 3502124201U;
int var_13 = 1808653103;
unsigned char var_16 = (unsigned char)109;
int zero = 0;
unsigned short var_17 = (unsigned short)12196;
short var_18 = (short)1491;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1870319488U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
