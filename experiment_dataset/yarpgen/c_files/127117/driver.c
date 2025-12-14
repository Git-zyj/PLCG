#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -4060858374565951967LL;
long long int var_4 = -409797929518318027LL;
unsigned char var_6 = (unsigned char)185;
int zero = 0;
long long int var_11 = -2196650300108031925LL;
short var_12 = (short)-7051;
void init() {
}

void checksum() {
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
