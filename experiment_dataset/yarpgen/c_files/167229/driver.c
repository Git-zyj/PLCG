#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)8907;
short var_12 = (short)-424;
unsigned int var_17 = 1537218999U;
unsigned int var_18 = 1092590017U;
int zero = 0;
unsigned long long int var_19 = 2102574890960092308ULL;
int var_20 = -575488327;
unsigned long long int var_21 = 3425223880965023075ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
