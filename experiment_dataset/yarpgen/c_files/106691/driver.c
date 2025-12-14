#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4553681704464947058LL;
unsigned int var_2 = 739137357U;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1320505316U;
short var_8 = (short)-20717;
short var_9 = (short)909;
int zero = 0;
int var_16 = -1421599289;
unsigned int var_17 = 2837099951U;
unsigned long long int var_18 = 16660524457944264124ULL;
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
