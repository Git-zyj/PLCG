#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 840255495187257029LL;
unsigned long long int var_10 = 14858305703952994949ULL;
unsigned short var_11 = (unsigned short)2917;
long long int var_13 = -2964908280443541290LL;
unsigned long long int var_14 = 5055626027190697293ULL;
unsigned long long int var_16 = 9252714935688320584ULL;
int zero = 0;
unsigned long long int var_19 = 9272351787122177751ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
