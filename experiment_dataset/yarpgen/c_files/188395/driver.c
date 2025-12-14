#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7297315214222203300LL;
signed char var_9 = (signed char)24;
unsigned int var_10 = 3064092569U;
int zero = 0;
unsigned short var_15 = (unsigned short)45494;
long long int var_16 = 3342592869393639107LL;
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
