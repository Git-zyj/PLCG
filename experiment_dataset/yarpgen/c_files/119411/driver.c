#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)130;
signed char var_2 = (signed char)36;
unsigned long long int var_3 = 6632534056661773124ULL;
signed char var_9 = (signed char)23;
int zero = 0;
unsigned short var_14 = (unsigned short)45917;
unsigned int var_15 = 2227527973U;
int var_16 = 898708269;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
