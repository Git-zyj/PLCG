#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4993402024631026601ULL;
unsigned short var_2 = (unsigned short)29511;
int var_7 = -2100085243;
signed char var_12 = (signed char)116;
int zero = 0;
long long int var_13 = -5868643684340473825LL;
int var_14 = 738577141;
unsigned int var_15 = 1430584055U;
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
