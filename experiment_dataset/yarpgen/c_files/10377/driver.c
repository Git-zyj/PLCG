#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7909190544308656793LL;
long long int var_2 = 5672588702364207944LL;
unsigned short var_11 = (unsigned short)43547;
int zero = 0;
unsigned int var_13 = 998877555U;
short var_14 = (short)-20623;
void init() {
}

void checksum() {
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
