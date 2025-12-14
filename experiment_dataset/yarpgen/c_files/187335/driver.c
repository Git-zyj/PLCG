#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5693743145391351031LL;
unsigned long long int var_2 = 6173334780829258232ULL;
signed char var_6 = (signed char)-105;
int zero = 0;
short var_16 = (short)-17858;
unsigned short var_17 = (unsigned short)26337;
unsigned int var_18 = 884318085U;
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
