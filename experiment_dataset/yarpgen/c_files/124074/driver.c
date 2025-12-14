#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
signed char var_1 = (signed char)-93;
int var_3 = 1575056901;
unsigned long long int var_8 = 12435000577080373530ULL;
long long int var_9 = 280105184348675227LL;
int zero = 0;
long long int var_10 = -6168046486440383930LL;
short var_11 = (short)-32447;
long long int var_12 = -1488294717971637873LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
