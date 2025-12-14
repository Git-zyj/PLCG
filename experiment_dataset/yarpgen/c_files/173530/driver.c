#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2773473068U;
unsigned short var_7 = (unsigned short)3821;
unsigned short var_8 = (unsigned short)56037;
unsigned int var_9 = 987085893U;
unsigned long long int var_11 = 12798792326139282997ULL;
unsigned long long int var_12 = 674715480529555165ULL;
int zero = 0;
int var_19 = 389576412;
unsigned long long int var_20 = 16476659529288107411ULL;
unsigned long long int var_21 = 8075490682392009115ULL;
int var_22 = 1407221777;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
