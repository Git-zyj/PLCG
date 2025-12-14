#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 750262369U;
unsigned long long int var_5 = 7135951068733648156ULL;
short var_7 = (short)14393;
unsigned short var_10 = (unsigned short)33448;
unsigned long long int var_11 = 394467492785010317ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)77;
int var_19 = 556008593;
signed char var_20 = (signed char)61;
void init() {
}

void checksum() {
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
