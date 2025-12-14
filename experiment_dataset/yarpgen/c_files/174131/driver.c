#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -59067794;
unsigned short var_3 = (unsigned short)55866;
unsigned short var_4 = (unsigned short)45986;
unsigned int var_6 = 2065970554U;
int var_8 = 1091088718;
int zero = 0;
int var_13 = -271387949;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2058658432U;
void init() {
}

void checksum() {
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
