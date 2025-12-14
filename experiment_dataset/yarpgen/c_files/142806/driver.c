#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -174885264;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13418230242062204122ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_14 = -3710986191710533686LL;
short var_15 = (short)29337;
short var_16 = (short)-11784;
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
