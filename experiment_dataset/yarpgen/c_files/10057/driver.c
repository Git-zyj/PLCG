#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_2 = 8452219585765542103ULL;
short var_6 = (short)-12255;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-7424;
long long int var_13 = 1531244015034198435LL;
int zero = 0;
unsigned int var_16 = 3018844143U;
unsigned long long int var_17 = 14404728801203977471ULL;
short var_18 = (short)24633;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
