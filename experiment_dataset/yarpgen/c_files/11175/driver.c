#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1076033721U;
unsigned short var_1 = (unsigned short)27640;
unsigned short var_2 = (unsigned short)54719;
short var_4 = (short)4582;
unsigned short var_7 = (unsigned short)10552;
unsigned long long int var_8 = 15691071528353710064ULL;
unsigned int var_9 = 842002781U;
int zero = 0;
unsigned int var_10 = 1139143142U;
unsigned int var_11 = 1507435901U;
short var_12 = (short)26117;
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
