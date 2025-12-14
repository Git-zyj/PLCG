#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28078;
unsigned int var_4 = 10927754U;
unsigned long long int var_7 = 1605703482882668293ULL;
short var_9 = (short)4969;
unsigned int var_11 = 4266368624U;
int zero = 0;
short var_18 = (short)-18562;
unsigned int var_19 = 3610450674U;
void init() {
}

void checksum() {
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
