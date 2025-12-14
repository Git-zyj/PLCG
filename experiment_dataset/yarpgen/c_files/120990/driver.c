#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 647212995;
int var_1 = -1823781245;
int var_6 = -1741880820;
unsigned int var_9 = 4021832352U;
short var_12 = (short)4491;
signed char var_14 = (signed char)63;
unsigned int var_15 = 1766306815U;
unsigned int var_17 = 2597321969U;
int zero = 0;
int var_19 = -1284550431;
unsigned long long int var_20 = 11145592556237822382ULL;
unsigned long long int var_21 = 2918822515396603121ULL;
signed char var_22 = (signed char)17;
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
