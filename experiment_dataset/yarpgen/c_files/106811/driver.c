#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4446066043739887754LL;
short var_11 = (short)25613;
short var_12 = (short)21252;
long long int var_18 = -8079481725578233584LL;
int zero = 0;
unsigned short var_19 = (unsigned short)60286;
unsigned short var_20 = (unsigned short)60635;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
