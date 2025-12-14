#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -147359199;
short var_9 = (short)-14072;
unsigned long long int var_11 = 3894461489978815701ULL;
int zero = 0;
int var_14 = 497860273;
unsigned short var_15 = (unsigned short)22261;
void init() {
}

void checksum() {
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
