#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
unsigned long long int var_2 = 9553088384143014907ULL;
long long int var_7 = 1515229138003362448LL;
unsigned char var_9 = (unsigned char)155;
int var_10 = 2043640069;
int zero = 0;
unsigned long long int var_11 = 8282202764832965931ULL;
unsigned char var_12 = (unsigned char)213;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
