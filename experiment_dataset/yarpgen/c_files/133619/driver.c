#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8066343023253885815LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 16963428471202078288ULL;
unsigned short var_12 = (unsigned short)16453;
int zero = 0;
unsigned short var_14 = (unsigned short)30284;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)34691;
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
