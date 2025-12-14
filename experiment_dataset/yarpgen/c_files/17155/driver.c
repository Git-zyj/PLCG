#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4929159689098953027ULL;
unsigned short var_3 = (unsigned short)61984;
unsigned short var_4 = (unsigned short)15023;
unsigned char var_10 = (unsigned char)150;
int var_12 = -1519252473;
int zero = 0;
unsigned short var_14 = (unsigned short)64035;
long long int var_15 = -6596883477039835017LL;
long long int var_16 = -6178794779513844314LL;
signed char var_17 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
