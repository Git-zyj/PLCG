#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13114000194725177808ULL;
unsigned short var_1 = (unsigned short)51986;
int var_8 = -1548734995;
short var_12 = (short)-9898;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = 8784199816177617529LL;
short var_18 = (short)4980;
signed char var_19 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
