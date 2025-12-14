#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 866445010U;
unsigned short var_7 = (unsigned short)50054;
short var_15 = (short)345;
int zero = 0;
unsigned short var_19 = (unsigned short)44942;
unsigned long long int var_20 = 7523063454640494517ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
