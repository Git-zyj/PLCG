#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2436420337U;
unsigned int var_4 = 3485656746U;
long long int var_6 = 4273651773238273330LL;
unsigned int var_10 = 3017618931U;
unsigned long long int var_12 = 18268392475274532061ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)54;
unsigned long long int var_16 = 9697630326742598231ULL;
void init() {
}

void checksum() {
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
