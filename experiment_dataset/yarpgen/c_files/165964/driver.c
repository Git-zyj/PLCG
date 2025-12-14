#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -6250861484618274501LL;
signed char var_8 = (signed char)-35;
unsigned int var_11 = 1538344204U;
int zero = 0;
short var_14 = (short)-30837;
unsigned char var_15 = (unsigned char)202;
void init() {
}

void checksum() {
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
