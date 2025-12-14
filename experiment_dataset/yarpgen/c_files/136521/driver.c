#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -561149096;
int var_3 = 1500081697;
long long int var_5 = -3265005406862273654LL;
unsigned long long int var_17 = 10717239047734217317ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)212;
unsigned long long int var_19 = 1202205110526070950ULL;
long long int var_20 = 1469558820738540452LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
