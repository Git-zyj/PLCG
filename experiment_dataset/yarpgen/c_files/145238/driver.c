#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 7218191856238484264ULL;
long long int var_11 = 812853233727390410LL;
int var_14 = 1099468308;
int zero = 0;
unsigned long long int var_19 = 7034156580572443424ULL;
short var_20 = (short)14378;
unsigned short var_21 = (unsigned short)13759;
int var_22 = 287869662;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
