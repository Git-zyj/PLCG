#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)15979;
unsigned long long int var_5 = 14363905474009481730ULL;
long long int var_8 = -1277311241242818519LL;
int var_9 = -85653659;
short var_10 = (short)8773;
int zero = 0;
int var_11 = 1827378295;
unsigned int var_12 = 3299243732U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
