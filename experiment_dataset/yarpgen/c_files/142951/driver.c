#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 8806070599848106115ULL;
int var_10 = -1952825979;
unsigned short var_13 = (unsigned short)20431;
long long int var_15 = -6425707780875221004LL;
int zero = 0;
short var_17 = (short)4449;
unsigned short var_18 = (unsigned short)28755;
unsigned short var_19 = (unsigned short)35563;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
