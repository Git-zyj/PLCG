#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
int var_4 = -542018813;
_Bool var_8 = (_Bool)0;
int var_9 = -274275517;
unsigned long long int var_18 = 10741853481966315792ULL;
int zero = 0;
int var_20 = 632395777;
unsigned char var_21 = (unsigned char)146;
unsigned long long int var_22 = 13401351056623093174ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
