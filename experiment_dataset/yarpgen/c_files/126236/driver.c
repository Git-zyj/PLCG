#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1616567594U;
int var_4 = 1150442088;
short var_16 = (short)-20621;
long long int var_18 = 4551836730730787960LL;
int zero = 0;
unsigned long long int var_19 = 7173255035312279143ULL;
signed char var_20 = (signed char)-69;
int var_21 = 1372357159;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
