#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1148919099;
_Bool var_2 = (_Bool)1;
int var_7 = -737324288;
unsigned long long int var_11 = 7764415002273053090ULL;
unsigned long long int var_12 = 13168733924029402850ULL;
signed char var_13 = (signed char)-106;
int zero = 0;
unsigned long long int var_14 = 2331186378433004342ULL;
long long int var_15 = 3368201521367137073LL;
unsigned long long int var_16 = 2207669618839148108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
