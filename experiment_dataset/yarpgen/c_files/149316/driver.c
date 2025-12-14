#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1286911243U;
signed char var_9 = (signed char)-80;
unsigned long long int var_13 = 15060866352222538286ULL;
short var_14 = (short)-3757;
int zero = 0;
unsigned int var_16 = 3493435491U;
unsigned long long int var_17 = 17537769032483337153ULL;
signed char var_18 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
