#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -833959115;
unsigned int var_2 = 2757102603U;
long long int var_4 = -5669326971965843386LL;
unsigned short var_9 = (unsigned short)27501;
int zero = 0;
unsigned int var_13 = 2606474969U;
int var_14 = 1659474070;
void init() {
}

void checksum() {
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
