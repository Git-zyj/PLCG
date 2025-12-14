#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1693419569;
_Bool var_2 = (_Bool)0;
unsigned int var_7 = 263722000U;
short var_8 = (short)14497;
int zero = 0;
long long int var_13 = -6904369357753367075LL;
short var_14 = (short)-5566;
unsigned int var_15 = 1893456954U;
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
