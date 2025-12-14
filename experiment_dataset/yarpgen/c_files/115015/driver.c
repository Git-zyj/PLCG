#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-4537;
unsigned short var_9 = (unsigned short)19463;
int var_15 = -1530948003;
int zero = 0;
unsigned long long int var_17 = 9202318826587931115ULL;
short var_18 = (short)-5838;
_Bool var_19 = (_Bool)1;
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
