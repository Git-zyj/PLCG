#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 520367603;
unsigned long long int var_3 = 16535492243432569253ULL;
unsigned long long int var_7 = 8039108321886028915ULL;
unsigned char var_9 = (unsigned char)211;
unsigned long long int var_11 = 6777471443539135159ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 505353281;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 745490757;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)66;
int var_23 = -1934159478;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
