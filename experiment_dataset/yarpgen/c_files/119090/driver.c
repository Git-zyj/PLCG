#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1313027054;
int var_3 = 867960405;
long long int var_5 = -2526698112661197017LL;
unsigned char var_11 = (unsigned char)36;
int zero = 0;
long long int var_13 = -2669278805365485470LL;
int var_14 = 1846713362;
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
