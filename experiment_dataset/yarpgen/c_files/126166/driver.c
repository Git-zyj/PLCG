#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6465418360517770545LL;
unsigned short var_5 = (unsigned short)4384;
short var_12 = (short)23816;
unsigned int var_13 = 3714057369U;
int zero = 0;
unsigned int var_17 = 2914471109U;
long long int var_18 = -1958770498288933458LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
