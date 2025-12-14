#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2181787910537242834LL;
unsigned short var_9 = (unsigned short)62085;
int zero = 0;
signed char var_13 = (signed char)86;
int var_14 = -1345019692;
unsigned short var_15 = (unsigned short)23759;
signed char var_16 = (signed char)104;
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
