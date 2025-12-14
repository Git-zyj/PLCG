#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 876457818;
long long int var_5 = -8889231356249048599LL;
unsigned char var_6 = (unsigned char)78;
signed char var_9 = (signed char)28;
int zero = 0;
unsigned int var_13 = 20618705U;
long long int var_14 = -9041733720067153035LL;
unsigned long long int var_15 = 6124533205593340589ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
