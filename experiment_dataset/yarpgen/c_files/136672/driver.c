#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 822472014U;
unsigned short var_3 = (unsigned short)2082;
unsigned long long int var_5 = 6732947216405270658ULL;
signed char var_10 = (signed char)-37;
unsigned long long int var_12 = 17683453420092979523ULL;
int zero = 0;
signed char var_13 = (signed char)26;
unsigned long long int var_14 = 3120902253951545167ULL;
unsigned short var_15 = (unsigned short)18738;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
