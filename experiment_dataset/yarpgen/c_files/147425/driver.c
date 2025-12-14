#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17035;
int var_5 = -1112603229;
short var_8 = (short)1351;
unsigned long long int var_11 = 139578523305523660ULL;
signed char var_14 = (signed char)-53;
int zero = 0;
unsigned long long int var_20 = 6086490714115520802ULL;
int var_21 = 1578601555;
void init() {
}

void checksum() {
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
