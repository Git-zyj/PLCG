#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1139128466;
short var_1 = (short)590;
unsigned long long int var_4 = 11124751758498253101ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -4283271462236983359LL;
unsigned short var_14 = (unsigned short)38696;
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
