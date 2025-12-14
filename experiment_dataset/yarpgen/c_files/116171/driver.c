#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37566;
unsigned short var_6 = (unsigned short)46074;
unsigned short var_10 = (unsigned short)51515;
unsigned short var_13 = (unsigned short)46532;
unsigned short var_16 = (unsigned short)1560;
int zero = 0;
unsigned short var_18 = (unsigned short)64310;
unsigned short var_19 = (unsigned short)64869;
void init() {
}

void checksum() {
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
