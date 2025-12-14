#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -896560700;
unsigned long long int var_7 = 1474095868049651369ULL;
unsigned short var_9 = (unsigned short)54258;
int zero = 0;
int var_11 = -709152768;
int var_12 = 1958104680;
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
