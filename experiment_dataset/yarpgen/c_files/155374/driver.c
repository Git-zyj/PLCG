#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1097585053U;
unsigned int var_1 = 2211942216U;
unsigned long long int var_6 = 5639582558887573429ULL;
unsigned int var_11 = 3687835625U;
int zero = 0;
unsigned long long int var_14 = 1667195014630908218ULL;
unsigned short var_15 = (unsigned short)46895;
void init() {
}

void checksum() {
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
