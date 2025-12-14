#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)14293;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-26346;
int var_9 = 1738995765;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 6061842203931859104ULL;
unsigned short var_14 = (unsigned short)1549;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-96;
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
