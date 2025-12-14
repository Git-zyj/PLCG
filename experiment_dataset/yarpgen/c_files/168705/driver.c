#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
long long int var_3 = 6569050870475347963LL;
long long int var_4 = 3925453320604047121LL;
unsigned long long int var_6 = 14976388225454975148ULL;
int var_8 = 123873810;
_Bool var_9 = (_Bool)1;
int var_10 = -1219650530;
long long int var_12 = -2467702343972069859LL;
int var_13 = 354979215;
unsigned int var_15 = 219756295U;
int var_16 = -1655724245;
int var_17 = 1649645712;
int zero = 0;
unsigned long long int var_18 = 22114614046436032ULL;
long long int var_19 = 2007535989621550812LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
