#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-10;
unsigned char var_8 = (unsigned char)83;
unsigned char var_9 = (unsigned char)30;
unsigned long long int var_13 = 10494906117111482040ULL;
unsigned long long int var_15 = 553835014598323146ULL;
unsigned long long int var_17 = 16633973344947216082ULL;
int zero = 0;
signed char var_18 = (signed char)52;
unsigned long long int var_19 = 2574604023176894857ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
