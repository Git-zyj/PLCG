#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
unsigned char var_5 = (unsigned char)110;
unsigned char var_8 = (unsigned char)30;
unsigned long long int var_10 = 7935312265230270218ULL;
unsigned long long int var_11 = 7575839193270787597ULL;
unsigned char var_12 = (unsigned char)33;
int zero = 0;
unsigned char var_13 = (unsigned char)147;
unsigned char var_14 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
