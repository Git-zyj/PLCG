#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7525060424143420801LL;
signed char var_1 = (signed char)-15;
unsigned short var_8 = (unsigned short)27988;
unsigned int var_10 = 1384791896U;
int zero = 0;
unsigned short var_14 = (unsigned short)5827;
signed char var_15 = (signed char)-93;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
