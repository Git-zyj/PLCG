#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9338836155834113492ULL;
unsigned int var_1 = 3707961669U;
long long int var_4 = -4744487836729025537LL;
int zero = 0;
unsigned short var_16 = (unsigned short)4208;
long long int var_17 = 1888965850939798621LL;
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
