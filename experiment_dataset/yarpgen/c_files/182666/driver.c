#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1253080360;
long long int var_9 = -1401812072157126231LL;
int zero = 0;
signed char var_16 = (signed char)1;
int var_17 = 691768509;
signed char var_18 = (signed char)115;
unsigned short var_19 = (unsigned short)43622;
unsigned long long int var_20 = 3525440477101558171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
