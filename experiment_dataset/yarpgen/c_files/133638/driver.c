#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9117679621360937517LL;
unsigned char var_6 = (unsigned char)192;
unsigned short var_7 = (unsigned short)17121;
int var_14 = -1484956543;
int zero = 0;
unsigned short var_15 = (unsigned short)15187;
long long int var_16 = -4772497291444294373LL;
long long int var_17 = 7599068896343310968LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
