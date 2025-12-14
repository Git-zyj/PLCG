#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6834526964981530969LL;
short var_6 = (short)12182;
long long int var_7 = 2943435786745161969LL;
unsigned long long int var_8 = 10216097555747841224ULL;
int zero = 0;
unsigned long long int var_11 = 1728717811460249395ULL;
short var_12 = (short)908;
int var_13 = 37544731;
unsigned long long int var_14 = 9765074717170361663ULL;
unsigned short var_15 = (unsigned short)56884;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
