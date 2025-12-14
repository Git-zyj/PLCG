#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1527298119;
unsigned short var_1 = (unsigned short)4417;
unsigned short var_4 = (unsigned short)7737;
unsigned int var_13 = 3261949455U;
int zero = 0;
unsigned int var_18 = 1768705940U;
unsigned int var_19 = 4002072607U;
int var_20 = -1412732913;
int var_21 = -1423181098;
unsigned int var_22 = 2507521310U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
