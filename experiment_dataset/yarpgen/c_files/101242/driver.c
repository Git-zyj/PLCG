#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5557701620718327606ULL;
unsigned short var_3 = (unsigned short)45216;
long long int var_8 = -8639509442324358135LL;
int var_9 = -1365387068;
int zero = 0;
unsigned long long int var_13 = 16339281572220646766ULL;
unsigned char var_14 = (unsigned char)234;
signed char var_15 = (signed char)-2;
signed char var_16 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
