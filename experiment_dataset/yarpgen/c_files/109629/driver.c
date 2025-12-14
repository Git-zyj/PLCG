#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 741787218;
short var_3 = (short)15772;
unsigned int var_5 = 249042285U;
short var_6 = (short)-13119;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4196829460U;
unsigned long long int var_12 = 14911655492096468778ULL;
signed char var_13 = (signed char)34;
int zero = 0;
unsigned int var_17 = 969934526U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
