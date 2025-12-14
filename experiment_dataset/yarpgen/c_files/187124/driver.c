#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56584;
unsigned short var_7 = (unsigned short)37343;
unsigned short var_8 = (unsigned short)30071;
unsigned long long int var_11 = 613769480072247755ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)39822;
long long int var_13 = -6432610619884586189LL;
int var_14 = 1595085383;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
