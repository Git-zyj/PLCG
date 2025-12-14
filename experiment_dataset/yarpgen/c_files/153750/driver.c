#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)184;
long long int var_10 = 5497410924399784375LL;
signed char var_19 = (signed char)125;
int zero = 0;
unsigned long long int var_20 = 12812271296072263393ULL;
signed char var_21 = (signed char)7;
unsigned char var_22 = (unsigned char)202;
long long int var_23 = -5113384665054134787LL;
unsigned int var_24 = 2385207343U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
