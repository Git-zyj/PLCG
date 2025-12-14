#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)36;
int var_7 = 1679777381;
int var_8 = -36131622;
int var_11 = -808210751;
long long int var_12 = 6659205662637279774LL;
unsigned char var_17 = (unsigned char)237;
int zero = 0;
int var_19 = -1792853878;
unsigned int var_20 = 1738145628U;
long long int var_21 = 3936808156592594774LL;
long long int var_22 = -647537585589012971LL;
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
