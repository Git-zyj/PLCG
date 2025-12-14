#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15064;
unsigned char var_4 = (unsigned char)99;
unsigned long long int var_9 = 18195364457223720276ULL;
unsigned long long int var_10 = 6755326208977548091ULL;
int zero = 0;
unsigned int var_11 = 594255006U;
int var_12 = -1622330091;
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
