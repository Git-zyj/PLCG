#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4121313798768525428LL;
unsigned long long int var_3 = 17597954662319570008ULL;
unsigned long long int var_4 = 5194726808784949574ULL;
signed char var_5 = (signed char)109;
unsigned long long int var_6 = 9910082950996236931ULL;
signed char var_10 = (signed char)100;
int zero = 0;
long long int var_11 = -1169120748738980777LL;
unsigned char var_12 = (unsigned char)133;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
