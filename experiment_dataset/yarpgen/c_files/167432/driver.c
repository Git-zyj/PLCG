#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 406550902U;
unsigned int var_6 = 2685497132U;
unsigned short var_8 = (unsigned short)15958;
short var_9 = (short)-7667;
int zero = 0;
unsigned int var_12 = 656477552U;
unsigned long long int var_13 = 13398061482432156153ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
