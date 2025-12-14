#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1318721327;
long long int var_4 = -4357813829036135694LL;
unsigned char var_7 = (unsigned char)194;
int zero = 0;
unsigned short var_10 = (unsigned short)31869;
unsigned long long int var_11 = 17829250412275047567ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
