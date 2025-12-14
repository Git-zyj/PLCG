#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2482892313U;
unsigned int var_3 = 3422124163U;
unsigned long long int var_4 = 4604777580306678851ULL;
int var_10 = 443205784;
int zero = 0;
unsigned short var_11 = (unsigned short)52756;
unsigned int var_12 = 3912142863U;
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
