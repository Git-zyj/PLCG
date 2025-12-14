#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 942877433U;
int var_8 = -379316499;
int var_9 = 499058981;
signed char var_10 = (signed char)121;
int var_11 = 1984837564;
int zero = 0;
unsigned int var_15 = 2311759056U;
unsigned int var_16 = 762621704U;
unsigned long long int var_17 = 13658933892706706703ULL;
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
