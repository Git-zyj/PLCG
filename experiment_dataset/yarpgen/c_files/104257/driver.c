#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54209;
signed char var_4 = (signed char)-29;
long long int var_5 = -2596198936310612367LL;
int zero = 0;
unsigned long long int var_16 = 11884489042735674207ULL;
unsigned long long int var_17 = 9687158879677770241ULL;
long long int var_18 = 8086688914700076233LL;
int var_19 = 1434186084;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
