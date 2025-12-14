#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23064;
signed char var_4 = (signed char)-91;
short var_8 = (short)20368;
int var_10 = 1422629828;
int zero = 0;
signed char var_19 = (signed char)-51;
unsigned long long int var_20 = 7935805439875246367ULL;
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
