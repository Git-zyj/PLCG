#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1019650613U;
unsigned short var_6 = (unsigned short)11761;
long long int var_9 = -2343163039410488929LL;
int zero = 0;
unsigned char var_12 = (unsigned char)59;
unsigned int var_13 = 3594931846U;
unsigned char var_14 = (unsigned char)189;
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
