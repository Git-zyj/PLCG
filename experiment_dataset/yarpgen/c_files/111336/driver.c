#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14209667696370438255ULL;
int var_3 = 1689214462;
unsigned long long int var_6 = 6144131098834603662ULL;
int zero = 0;
signed char var_12 = (signed char)-62;
long long int var_13 = -2878356938924318539LL;
signed char var_14 = (signed char)106;
unsigned short var_15 = (unsigned short)62398;
void init() {
}

void checksum() {
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
