#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9431628895664473288ULL;
signed char var_8 = (signed char)79;
unsigned short var_11 = (unsigned short)64381;
unsigned short var_14 = (unsigned short)46505;
int zero = 0;
unsigned int var_16 = 2835058973U;
unsigned long long int var_17 = 10162238257087568450ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
