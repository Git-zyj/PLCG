#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2970069436U;
unsigned int var_13 = 3563304888U;
long long int var_15 = -3371462187836899981LL;
int zero = 0;
unsigned char var_16 = (unsigned char)224;
long long int var_17 = 4184938591672053293LL;
void init() {
}

void checksum() {
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
