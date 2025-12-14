#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15710382002978703142ULL;
unsigned long long int var_2 = 16504005712543373262ULL;
int var_3 = -1012675080;
unsigned long long int var_8 = 14268438945809734778ULL;
int var_9 = 398218365;
long long int var_13 = 4063450343229240791LL;
int zero = 0;
signed char var_15 = (signed char)118;
unsigned short var_16 = (unsigned short)24945;
int var_17 = 269482654;
signed char var_18 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
