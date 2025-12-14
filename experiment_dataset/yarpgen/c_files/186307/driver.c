#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
int var_2 = 1647136136;
int var_6 = 1081264654;
unsigned long long int var_13 = 4748036624149176224ULL;
int zero = 0;
int var_14 = -1833553233;
int var_15 = 1414203351;
unsigned short var_16 = (unsigned short)46849;
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
