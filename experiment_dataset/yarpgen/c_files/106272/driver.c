#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 588267055;
unsigned long long int var_3 = 11190125419871876751ULL;
int var_8 = -1624128651;
unsigned int var_18 = 3657708921U;
int zero = 0;
int var_19 = 840206834;
unsigned long long int var_20 = 17505740047880174129ULL;
signed char var_21 = (signed char)-113;
long long int var_22 = 5678746730492613117LL;
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
