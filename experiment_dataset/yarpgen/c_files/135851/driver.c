#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 701000878U;
long long int var_3 = 123935775852069337LL;
unsigned long long int var_4 = 14392511076805635304ULL;
unsigned int var_5 = 2351258899U;
long long int var_7 = 2563865648851199725LL;
short var_8 = (short)23373;
long long int var_11 = 4368357070795364751LL;
int zero = 0;
unsigned int var_12 = 714042560U;
unsigned short var_13 = (unsigned short)47760;
unsigned int var_14 = 2213342821U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
