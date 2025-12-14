#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)0;
unsigned long long int var_4 = 15516432726673506341ULL;
unsigned int var_5 = 1865584916U;
unsigned int var_7 = 1846657928U;
int zero = 0;
long long int var_19 = 2956062220935017193LL;
unsigned long long int var_20 = 15713938710033994557ULL;
unsigned long long int var_21 = 5746360117464108633ULL;
unsigned long long int var_22 = 8167467997007981883ULL;
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
