#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 365764901U;
unsigned long long int var_3 = 13058571015143778763ULL;
long long int var_7 = 5753731645284562090LL;
int zero = 0;
signed char var_11 = (signed char)-46;
unsigned short var_12 = (unsigned short)43300;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
